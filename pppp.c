#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	if(n<9&&n>1)
	{
		switch(n)
		{
			case 1:
				printf("one");
				break;
				case 2:
					printf("two");
					break;
					case 3:
						printf("three");
						break;
						case 4:
							printf("four");
							break;
							case 5:
								printf("five");
								break;
								case 6:
									printf("six");
									break;
									case 7:
										printf("seven");
										break;
										case 8:
											printf("eight");
											break;
										}
										
		}
		else
		printf("greater than nine");
	}

