#include "rpn.h"
float evaluate(char* S, char*& RPN)
{
	Stack<float> opnd;
	Stack<char> optr;
	char* expr = S;
	optr.push('\0');
	while (!optr.empty())
	{
		if (isdigit(*S))
		{
			readNumber(S, opnd);
			append(RPN, opnd.top());
		}
		else
			switch (orderBetween(optr.top(), *S))
		{
			case '<':
				optr.push(*S);
				S++;
				break;
			case '=':
				optr.pop();
				S++;
				break;
			case '>':
			{
						char op = optr.pop();
						append(RPN, op);
						if ('!' == op)
						{
							float pOpnd = opnd.pop();
							opnd.push(calcu(op, pOpnd));
						}
						else
						{
							float pOpnd2 = opnd.pop();
							float pOpnd1 = opnd.pop();
							opnd.push(calcu(pOpnd1, op, pOpnd2));
						}
						break;
			}
			default:
				exit(-1);
		}
		//dispalyProgress(expr, S, opnd,optr,RPN);
	}
	return opnd.pop();
}