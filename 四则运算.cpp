#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main(void){
	printf("ѡ�����ԣ�\n1����������\n2�����w����\n3��English\n");
	int lan = 1;
	while(1){
		while(scanf("%d",&lan)!=1){
			while(getchar()!='\n'){
	    				
			}
			printf("����ȷ���룡\n"); 
		}
	    if(lan==1){
			printf("--------------------------------------------------------------------------------\n");
			printf("��ӭ����Сѧ����������ϵͳ��ϵͳ�����������20����������ÿ����Ĵ𰸺��»س���\n");
			break;	
		}else if(lan==2){
			printf("--------------------------------------------------------------------------------\n");
			printf("�gӭ�M��С�W���Ąt�\��ϵ�y��ϵ�y�����S�C���}20����Ոݔ��ÿ���}�Ĵ��ᰴ�»�܇�I\n");
			break;
		}else if(lan==3){
			printf("--------------------------------------------------------------------------------\n");
			printf("Welcome to the four arithmetic system for primary school students. \nThe system will give 20 questions at random. Please enter the answers to each question and press enter\n");
			break;
		}else{
			printf("����ȷ���룡\n"); 
		}
	}
	
	int point = 1;
	while(1){
		int s = 0; //������Ŀ�ĸ��� 
		for(int i = 0 ; i < 20 ; i++){// ѭ��20�Σ�ÿ���������һ����������ʽ���� 
		if(lan==1){
			printf("\n\n��%d�⣺\n",i+1);
		}else if(lan==2){
			printf("\n\n��%d�}��\n",i+1); 
		}else if (lan==3){
			printf("\n\nnumber %d��\n",i+1); 
		}
			int a, b ,c;//����ÿ������������� 
			int op1 , op2;//����ÿ�����е�������� 
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
				printf("%d+%d��%d\n" , a ,b ,c);
			}else if(op1*10+op2==10){
				sum = a - b + c;
				printf("%d-%d+%d\n" , a ,b ,c);
			}else if(op1*10+op2==11){
				sum = a - b - c;
				printf("%d-%d-%d\n" , a ,b ,c);
			}else if(op1*10+op2==12){
				sum = a - b * c;
				printf("%d-%d��%d\n" , a ,b ,c);
			}else if(op1*10+op2==20){
				sum = a * b + c;
				printf("%d��%d+%d\n" , a ,b ,c);
			}else if(op1*10+op2==21){
				sum = a * b - c;
				printf("%d��%d-%d\n" , a ,b ,c);
			}else if(op1*10+op2==22){
				sum = a * b * c;
				printf("%d��%d��%d\n" , a ,b ,c);
			}
			if(lan==1){
				printf("������𰸣�\n");
			}else if(lan==2){
				printf("Ոݔ��𰸣�\n"); 
			}else if (lan==3){
				printf("Please enter the answer:\n"); 
			}
			while(1){
	    		if(scanf("%d",&answer)!=1) {
	    			while(getchar()!='\n'){
	    				
					}
					if(lan==1){
						printf("����ȷ����𰸣�\n");
					}else if(lan==2){
						printf("Ո���_ݔ��𰸣�\n"); 
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
					printf("����ȷ��\n");
				}else if(lan==2){
					printf("�����_��\n"); 
				}else if (lan==3){
					printf("The answer is true!\n"); 
				}
				s+=1;
			} else{
				if(lan==1){
					printf("�𰸴���\n");
					printf("��ȷ�𰸣�%d\n",sum);
				}else if(lan==2){
					printf("���e�`��\n"); 
					printf("���_�𰸣�%d\n",sum);
				}else if (lan==3){
					printf("The answer is wrong!\n"); 
					printf("The correct answer is��%d\n",sum);
				}
			}
		}
		if(lan==1){
			printf("���δ��%d���⣬���%d����\n",s,20-s);
			printf("�ܵ÷֣�%d ��\n",s*5);
			printf("�Ƿ������һ����ϰ��\n");
			printf("1����\n�������˳�\n");
		}else if(lan==2){
			printf("���δ���%d���}�����e%d���}\n",s,20-s);
			printf("���÷֣�%d��\n",s*5);
			printf("�Ƿ��M����һ݆������\n");
			printf("1����\n�������˳�\n");
		}else if (lan==3){
			printf("%d correct and% d wrong answers this time\n",s,20-s);
			printf("Total score:%d\n",s*5);
			printf("\n\n.Do you want to go to the next round?\n");
			printf("1��yes\nanother��exit\n");
		}
		while(1){
	    	if(scanf("%d",&point)!=1) {
	    		while(getchar()!='\n'){
	    			
				}
				if(lan==1){
					printf("����ȷ����𰸣�\n");
				} else if(lan == 2){
					printf("Ո���_ݔ��𰸣�\n");
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
