#include <stdio.h>
#include <stdlib.h>

int main();

int attack_for_enemy(int n,int HP){  //自分の攻撃

	int miss;

	srand(time(NULL));

	miss = rand()%15+1;

	if(miss!=2){

		switch(n){

			case 1:HP-=2700;if(HP<0){return 0;}else{return HP;}

				break;

			case 2:HP-=1400;if(HP<0){return 0;}else{return HP;}

				break;

			case 3:HP-=2200;if(HP<0){return 0;}else{return HP;}

				break;

			case 4:HP-=1200;if(HP<0){return 0;}else{return HP;}

				break;

		}

	}else{

		return HP;

	}

	return 0;

}

int attack_for_hiko(int HP,int character){ //敵の攻撃

	int n;

	srand(time(NULL));

	n = rand()%20+1;

	switch(n){

		case 1:
		case 2:
		case 3:if(character==1){
				HP-=1000;
			}else if(character==2){
				HP-=1500;
			}
			if(HP<0){return 0;}else{return HP;}

			break;

		case 4:
		case 5:
		case 6:
		case 7:if(character==1){
				HP-=1500;
			}else if(character==2){
				HP-=1800;
			}
			if(HP<0){return 0;}else{return HP;}

			break;

		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:if(character==1){
				HP-=2200;
			}else if(character==2){
				HP-=2400;
			}
			if(HP<0){return 0;}else{return HP;}

			break;

		case 14:
		case 15:
		case 16:if(character==1){
				HP-=4000;
			}else if(character==2){
				HP-=3600;
			}
			if(HP<0){return 0;}else{return HP;}

			break;

		case 17:
		case 18:
		case 19:
		case 20: return HP;

			break;

	}

	return 0;

}

int HP_recover(int HP){

	HP += 3500;

	if(HP>10000){return 10000;}

	return HP;

}

void ue(int character){  //アニメーションの上の部分

	printf("\033[H\033[J");
	printf("\n");
	printf("\n");
	printf("\n");

	if(character==1){
		puts("									       ");
		puts("								               ");
		puts("                                                 　　　 ／￣￣￣＼/＼     ");
		puts("                                                   　　/ (･)　(･) (人)    ");
		puts("                                                  　(＼｜ ‥　  ‥  ｜    ");
		puts("                                                 　 L_∧　　▽　  　∧    ");
		puts("                                                 　 ＼| ＼＿＿＿／ |ス    ");

	}else if(character==2){

		puts("                                                      　　 _　　_        ");
		puts("                                                          (O>――<O)     ");
		puts("                                                 　　　　/(･)　(･)ヽ     ");
		puts("                                                      　 ○ ／▼＼ ○    ");
		puts("                                                     　 |(ヽ二フ)  |     ");
		puts("                                                   　　 /　￣￣￣　ヽ    ");
		puts("                                                   　　f ヽ　　　／ |    ");

	}

}

void sita(int character,char *name){  //アニメーションの下の部分

	if(character==1){

		puts("　　((／l￣l＼))                                 　　 |　 ＜只＞　 |       ");
		puts("　　　ｿ_＿＿ﾆ二ｽ　                               　　 |　　　　　　|       ");
		puts("　　∠シ ,,・ｪ・)ゝ                                    |＼＿＿＿＿／|      ");
		puts("　　　i つ旦とﾉ　                                　　 | 　  ＿  　 |       ");
		puts("　　　と_＿)＿)　                                 　　 ヽ＿ノ ヽ＿ノ       ");

	}else if(character==2){

		puts("　　((／l￣l＼))                                   　　｜＼_ )(＿／｜    ");
		puts("　　　ｿ_＿＿ﾆ二ｽ　                 　　 　         　　｜　　　　　｜     ");
		puts("　　∠シ ,,・ｪ・)ゝ                     　　          　｜　　　　　｜    ");
		puts("　　　i つ旦とﾉ　                                  　　｜　|￣￣|　｜     ");
		puts("　　　と_＿)＿)　                                  　　(＿ノ　　ヽ＿)     ");

	}

	printf("\n");
	printf("\n");
	printf("　　ひこにゃん？？(あなたのポクモン)                 %s(敵) \n",name);
	printf("\n");
	printf("\n");

}

void original(int character,char *name){  //敵を表示

	printf("\033[H\033[J");
	printf("\n");
	printf("\n");
	printf("\n");

	if(character==1){

		puts("										");
		puts("										");
		puts("                                                 　　　 ／￣￣￣＼/＼      ");
		puts("                                                   　　/ (･)　(･) (人)    ");
		puts("                                                  　(＼｜ ‥　  ‥  ｜     ");
		puts("                                                 　 L_∧　　▽　  　∧     ");
		puts("                                                 　 ＼| ＼＿＿＿／ |ス     ");
		puts("　　/i　　　　iヽ                                  　 |　　　　　　|＿)     ");
		puts("　　((／l￣l＼))                                 　　 |　 ＜只＞　 |        ");
		puts("　　　ｿ_＿＿ﾆ二ｽ　                               　　 |　　　　　　|        ");
		puts("　　∠シ ,,・ｪ・)ゝ                                    |＼＿＿＿＿／|       ");
		puts("　　　i つ旦とﾉ　                                　　 | 　  ＿  　 |        ");
		puts("　　　と_＿)＿)　                                 　　 ヽ＿ノ ヽ＿ノ        ");


	}else if(character==2){

		puts("                                                      　　 _　　_          ");
		puts("                                                          (O>――<O)      ");
		puts("                                                 　　　　/(･)　(･)ヽ       ");
		puts("                                                      　 ○ ／▼＼ ○      ");
		puts("                                                     　 |(ヽ二フ)  |       ");
		puts("                                                   　　 /　￣￣￣　ヽ      ");
		puts("                                                   　　f ヽ　　　／ |      ");
		puts("　　/i　　　　iヽ                                    　ヽ　＼　／　ノ       ");
		puts("　　((／l￣l＼))                                   　　｜＼_ )(＿／｜       ");
		puts("　　　ｿ_＿＿ﾆ二ｽ　                 　　 　         　　｜　　　　　｜        ");
		puts("　　∠シ ,,・ｪ・)ゝ                     　　          　｜　　　　　｜       ");
		puts("　　　i つ旦とﾉ　                                  　　｜　|￣￣|　｜       ");
		puts("　　　と_＿)＿)　                                  　　(＿ノ　　ヽ＿)       ");
	
	}

	printf("\n");
	printf("\n");
	printf("　　ひこにゃん？？(あなたのポクモン)                 %s(敵) \n",name);
	printf("\n");
	printf("\n");


}

void get_enemy(char *name){  //捕まえるときの画面

	printf("\033[H\033[J");
	printf("\n");
	printf("\n");
	printf("\n");
	puts("				  ");
	puts("				  ");
	puts("                            ");
	puts("                            ");
	puts("                            ");
	puts("                            ");
	puts("                            ");
	puts("　　/i　　　　iヽ            ");
	puts("　　((／l￣l＼))             ");
	puts("　　　ｿ_＿＿ﾆ二ｽ　           ");
	puts("　　∠シ ,,・ｪ・)ゝ          ");
	puts("　　　i つ旦とﾉ　            ");
	puts("　　　と_＿)＿)　                                          　◎    ");
	printf("\n");
	printf("\n");
	printf("　　ひこにゃん？？(あなたのポクモン)                 %s(敵) \n",name);
	printf("\n");
	printf("\n");

}

int cannot_catch(char *name,int character){  //捕まえれなかった場合

	get_enemy(name);

	sleep(1);

	original(character,name);
	printf("%sは捕まえることができませんでした(;ω;)\n\n",name);

	sleep(1);

	return 0;

}

int can_catch(char *name){  //捕まえた場合、ファイルに捕まえたポクモンを書き込む

	FILE *fp;
	char moji[]={"を捕まえた"};

	fp = fopen("pokemon_log.dat","a");

	fprintf(fp,"%s %s\n",name,moji);

	fclose(fp);

	get_enemy(name);

	printf("%sを捕まえることができました！！\n\n",name);
	return 0;

}

int get(int HP,int HP_original,char *name,int character){  //アニメーション

	int n;

	double HP_percent;

	srand(time(NULL));

	n = rand()%12+1;

	ue(character);
	if(character==1){
	puts("　　/i　　　　iヽ     ◎　                          　 |　　　　　　|＿)     ");
	}else if(character==2){
	puts("　　/i　　　　iヽ    ◎　                             　ヽ　＼　／　ノ   ");	
	}
	sita(character,name);

	sleep(1);

	ue(character);
	if(character==1){
	puts("　　/i　　　　iヽ    　       ◎　     　   　      　 |　　　　　　|＿)     ");
	}else if(character==2){
	puts("　　/i　　　　iヽ            ◎　              　　 　　ヽ　＼　／　ノ   ");
	}
	sita(character,name);

	sleep(1);

	ue(character);
	if(character==1){
	puts("　　/i　　　　iヽ      　          　◎  　         　 |　　　　　　|＿)     ");
	}else if(character==2){
	puts("　　/i　　　　iヽ                      ◎　　　　 　　　ヽ　＼　／　ノ   ");
	}
	sita(character,name);

	sleep(1);

	ue(character);
	if(character==1){
	puts("　　/i　　　　iヽ              　　        ◎       　 |　　　　　　|＿)     ");
	}else if(character==2){
	puts("　　/i　　　　iヽ                            ◎         ヽ　＼　／　ノ   ");
	}
	sita(character,name);

	sleep(1);

	ue(character);
	if(character==1){
	puts("　　/i　　　　iヽ                　                 ◎ |　　　　　　|＿)     ");
	}else if(character==2){
	puts("　　/i　　　　iヽ                                     ◎ヽ　＼　／　ノ   ");
	}
	sita(character,name);

	sleep(1);

	get_enemy(name);

	sleep(1);

	HP_percent=(double)HP_original;//HPの割合によって捕まりやすさを変える

	if(HP_percent*0.9<(double)HP){

		if((n>0)&&(n<12)){

			cannot_catch(name,character);

		}else{

			can_catch(name);
			return 1;
	
		}

	}else if((HP_percent*0.85>=(double)HP)&&((double)HP>HP_percent*0.65)){

		if((n>0)&&(n<=10)){

			cannot_catch(name,character);

		}else{

			can_catch(name);
			return 1;

		}

	}else if(((double)HP<=HP_percent*0.65)&&((double)HP>HP_percent*0.45)){

		if((n>0)&&(n<=9)){

			cannot_catch(name,character);

		}else{

			can_catch(name);
			return 1;

		}

	}else if(((double)HP<=HP_percent*0.45)&&((double)HP>HP_percent*0.25)){

		if((n>0)&&(n<=7)){

			cannot_catch(name,character);

		}else{

			can_catch(name);
			return 1;

		}

	}else if((double)HP<=HP_percent*0.25){

		if((n>0)&&(n<=5)){

			cannot_catch(name,character);

		}else{

			can_catch(name);
			return 1;

		}

	}else{

		return 0;

	}

	return 0;

}

int select_level(int HP_character,int HP_enemy,int HP_original,int character){

	int skil,e,count=2,have=4,ball=10,result,res,last;

	char *name;

	if(character==1){

		name="ふなっしー？？";

	}else{

		name="くまもん？？";

	}

	while((HP_character>0)&&(HP_enemy>0)){  //体力の判定でループするかどうか判定

		if(count%2!=0){

			original(character,name);
			printf("    HP %d/10000　　　　　　　　　　　　　　　　　　　HP %d/%d\n\n",HP_character,HP_enemy,HP_original);

			sleep(2);

			attack_for_hiko(HP_character,character);

			HP_character=attack_for_hiko(HP_character,character);

		}else{

hav:
bal:

			do{

				original(character,name);

				printf("    HP %d/10000　　　　　　　　　　　　　　　　　　　HP %d/%d\n\n",HP_character,HP_enemy,HP_original);
				printf("＊＊＊＊技＊＊＊＊\n\n");
				printf("1.お茶をかける\n");
				printf("2.居合斬り\n");
				printf("3.ひこにゃん？？のファン攻撃\n");
				printf("4.噛みつく\n\n");
				puts("＊＊＊＊アイテム＊＊＊＊");
				printf("5.きずぐすり  %d\n",have);
				printf("6.モンスターボール　%d\n\n",ball);
				printf("command:");
				scanf("%d",&skil);
	
			}while(!((skil>=1)&&(skil<=6)));

			if((skil!=5)&&(skil!=6)){

				attack_for_enemy(skil,HP_enemy);

				HP_enemy=attack_for_enemy(skil,HP_enemy);

			}else if(skil==5){

				if(have==0){

					goto hav;//きずぐすりがなかった場合、havに移動
					
				}
			
				HP_recover(HP_character);
					
				HP_character=HP_recover(HP_character);

				have-=1;

			}else if(skil==6){

				if(ball==0){
					
					goto bal;//モンスターボールがなかった場合、balに移動

				}

				result = get(HP_enemy,HP_original,name,character);

				if(result==1){  //捕まえることができた場合

					do{

						puts("");
						puts("1.ホーム画面に戻る");
						puts("2.ゲームを終了する");
						printf("command:");
						scanf("%d",&res);

						if(res==1){

							main();

						}else if(res==2){

							return 0;

						}

					}while(!(res==1)&&!(res==2));  //1・2以外ならループ

				}

				ball-=1;

			}

		}

		if((HP_enemy==0)||(HP_character==0)){ //HPが0の場合
			
			original(character,name);
			printf("    HP %d/10000　　　　　　　　　　　　　　　　　　　HP %d/%d\n\n",HP_character,HP_enemy,HP_original);

			if(HP_character==0){

				printf("%sの勝利です！！\nあなたの負けです\n\n",name);

			}else{

				printf("あなたの勝利です！！\n\n");

			}

			do{

				printf("1.ホーム画面に戻る\n");
				printf("2.ゲームを終了する\n");			
				printf("command:");
				scanf("%d",&last);

				if(last==1){

					main();

				}else if(last==2){

					return 0;

				}

			}while(!(last==1)&&!(last==2));  //1・2以外ならループ

		}

		count++;

	}

	return 0;

}

int main(){

	int HP_hiko=10000,HP_enemy,c;

	int character,level,sel,i,is;

	FILE *fp;

	do{

		printf("\033[H\033[J");
		puts("");
		puts("");
		printf("ポクモンだよー（・ω・）\n\n");

		printf("1.バトルする\n");
		printf("2.捕まえたポクモンを見る\n");
		printf("3.ゲームを終了する\n");
		printf("command:");
		scanf("%d",&sel);

	}while((sel!=1)&&(sel!=2)&&(sel!=3));  //1~3以外ならループ

	if(sel==1){   //1を選んだ場合（戦う）

		do{

			printf("\033[H\033[J");
			puts("");
			puts("");
			printf("＊＊＊＊＊敵のポクモン選択＊＊＊＊＊\n\n");

			puts("1.ふなっしー？？");
			puts("2.くまもん？？");
			printf("command:");
			scanf("%d",&character);

		}while((character!=1)&&(character!=2));  //1・2以外ならループ
	
		do{

			printf("\033[H\033[J");
			puts("");
			puts("");
			printf("＊＊＊＊＊難易度選択＊＊＊＊＊\n\n");

			puts("1.EASY");
			puts("2.NORMAL");
			puts("3.HARD");
			puts("4.EXTREME");
			printf("command:");
			scanf("%d",&level);

			if(level==1){

				HP_enemy=7000;

			}else if(level==2){

				HP_enemy=12000;

			}else if(level==3){

				HP_enemy=16000;
	
			}else if(level==4){

				HP_enemy=25000;
	
			}

		}while((level>4)||(level<1));

		select_level(HP_hiko,HP_enemy,HP_enemy,character);

	}else if(sel==2){  //2を選んだ場合（捕まえたポクモンを見る）

		do{

			printf("\033[H\033[J");
			puts("");
			puts("");
			if((fp = fopen("pokemon_log.dat","r"))==NULL){ //ファイルがあるかどうか（読めるかで判断）

				fp = fopen("pokemon_log.dat","a");  //ファイル作成

			}else{

				while((c=fgetc(fp))!=EOF){   //最後に達するまで書き出し
					fputc(c,stdout);
				}

			}
	
			fclose(fp);

			puts("");
	
			printf("1.ホーム画面に戻る\n");
			printf("2.ゲームを終了する\n");
			printf("command:");
			scanf("%d",&i);

			if(i==1){

				main();

			}else if(i==2){

				return 0;

			}

		}while((i!=1)&&(i!=2));

	}else if(sel==3){  //ゲーム終了

		return 0;

	}

	return 0;

}
