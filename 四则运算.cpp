#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main(void){
	printf("选择语言：\n1、简体中文\n2、繁體中文\n3、English\n");
	int lan = 1;
	while(1){
		while(scanf("%d",&lan)!=1){
			while(getchar()!='\n'){
	    				
			}
			printf("请正确输入！\n"); 
		}
	    if(lan==1){
			printf("--------------------------------------------------------------------------------\n");
			printf("欢迎进入小学生四则运算系统，系统将会随机出题20道，请输入每道题的答案后按下回车键\n");
			break;	
		}else if(lan==2){
			printf("--------------------------------------------------------------------------------\n");
			printf("歡迎進入小學生四則運算系統，系統將會隨機出題20道，請輸入每道題的答案後按下回車鍵\n");
			break;
		}else if(lan==3){
			printf("--------------------------------------------------------------------------------\n");
			printf("Welcome to the four arithmetic system for primary school students. \nThe system will give 20 questions at random. Please enter the answers to each question and press enter\n");
			break;
		}else{
			printf("请正确输入！\n"); 
		}
	}
	
	int point = 1;
	while(1){
		int s = 0; //做对题目的个数 
		for(int i = 0 ; i < 20 ; i++){// 循环20次，每次随机生成一个完整的算式及答案 
		if(lan==1){
			printf("\n\n第%d题：\n",i+1);
		}else if(lan==2){
			printf("\n\n第%d題：\n",i+1); 
		}else if (lan==3){
			printf("\n\nnumber %d：\n",i+1); 
		}
			int a, b ,c;//代表每个题的三个数字 
			int op1 , op2;//代表每道题中的两个算符 
			srand((unsigned int)time(NULL));
			a = rand()%100;
			b = rand()%100;
			c = rand()%100;
			op1 = rand()%3;
			op2 = rand()%3;
			int sum = 0;
			int answer = 0; 
			if(op1*10+op2==0){
				sum = a + b + c;
				printf("%d+%d+%d\n" , a ,b ,c);
			}else if(op1*10+op2==1){
				sum = a + b - c;
				printf("%d+%d-%d\n" , a ,b ,c);
			}else if(op1*10+op2==2){
				sum = a + b * c;
				printf("%d+%d×%d\n" , a ,b ,c);
			}else if(op1*10+op2==10){
				sum = a - b + c;
				printf("%d-%d+%d\n" , a ,b ,c);
			}else if(op1*10+op2==11){
				sum = a - b - c;
				printf("%d-%d-%d\n" , a ,b ,c);
			}else if(op1*10+op2==12){
				sum = a - b * c;
				printf("%d-%d×%d\n" , a ,b ,c);
			}else if(op1*10+op2==20){
				sum = a * b + c;
				printf("%d×%d+%d\n" , a ,b ,c);
			}else if(op1*10+op2==21){
				sum = a * b - c;
				printf("%d×%d-%d\n" , a ,b ,c);
			}else if(op1*10+op2==22){
				sum = a * b * c;
				printf("%d×%d×%d\n" , a ,b ,c);
			}
			if(lan==1){
				printf("请输入答案：\n");
			}else if(lan==2){
				printf("請輸入答案：\n"); 
			}else if (lan==3){
				printf("Please enter the answer:\n"); 
			}
			while(1){
	    		if(scanf("%d",&answer)!=1) {
	    			while(getchar()!='\n'){
	    				
					}
					if(lan==1){
						printf("请正确输入答案！\n");
					}else if(lan==2){
						printf("請正確輸入答案！\n"); 
					}else if (lan==3){
						printf("Please input the answer correctly!\n"); 
					}
	        		continue;
	    		}else{
	    			break;
				}
	    				
			}
			if(answer == sum){
				if(lan==1){
					printf("答案正确！\n");
				}else if(lan==2){
					printf("答案正確！\n"); 
				}else if (lan==3){
					printf("The answer is true!\n"); 
				}
				s+=1;
			} else{
				if(lan==1){
					printf("答案错误！\n");
					printf("正确答案：%d\n",sum);
				}else if(lan==2){
					printf("答案錯誤！\n"); 
					printf("正確答案：%d\n",sum);
				}else if (lan==3){
					printf("The answer is wrong!\n"); 
					printf("The correct answer is：%d\n",sum);
				}
			}
		}
		if(lan==1){
			printf("本次答对%d道题，答错%d道题\n",s,20-s);
			printf("总得分：%d 分\n",s*5);
			printf("是否进行下一轮练习？\n");
			printf("1、是\n其他、退出\n");
		}else if(lan==2){
			printf("本次答對%d道題，答錯%d道題\n",s,20-s);
			printf("總得分：%d分\n",s*5);
			printf("是否進行下一輪練習？\n");
			printf("1、是\n其他、退出\n");
		}else if (lan==3){
			printf("%d correct and% d wrong answers this time\n",s,20-s);
			printf("Total score:%d\n",s*5);
			printf("\n\n.Do you want to go to the next round?\n");
			printf("1：yes\nanother：exit\n");
		}
		while(1){
	    	if(scanf("%d",&point)!=1) {
	    		while(getchar()!='\n'){
	    			
				}
				if(lan==1){
					printf("请正确输入答案！\n");
				} else if(lan == 2){
					printf("請正確輸入答案！\n");
				}else if(lan == 3){
					printf("Please input the answer correctly!\n");
				}
	        	continue;
	    	}else{
	    		break;
			}				
		}
			if(point==1){
				
			}else{
				break;
			}
		
	}
	return 0; 
} 
