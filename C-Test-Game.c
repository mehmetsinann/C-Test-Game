#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <process.h>
#include <time.h>

 struct sorular{
 	char soru[150];
 	char sik_A[50];
 	char sik_B[50];
 	char sik_C[50];
 	char sik_D[50];
 	char dogru_cevap[50];
 	int id;
 }soru;
 struct kullanici{
 	char kullanici_adi[40];
 	int puan;
 	
 }kullanici;
 
 
 // FONKSIYONLAR
 void delay(float number_of_seconds);
 void soru_ekle();
 void bosluk();
 void tire();
 void soru_gg();
 void oyna();
 void soru_sil();
 void skorlar();
 void ldg(int a);
 

 int main(){
 	ldg(0);
 	int f;

	for(f=0;f<14;f++){
		printf("========================================================================================================================\n");
		delay(0.1);
	}
	delay(0.1);
	printf("=============================================                             ==============================================\n");
	delay(0.1);
	printf("=============================================  TEST OYUNUNA HOSGELDINIZ!  ==============================================\n");
	delay(0.1);
	printf("=============================================                             ==============================================\n");
	delay(0.1);
	for(f=0;f<13;f++){
		printf("========================================================================================================================\n");
		delay(0.1);
	}
	delay(0.1);
	printf("========================================================================================================================");
	
	delay(2);
	ldg(2);
	system("color 06");
	system("CLS");
	int m;
 	while(1){
 	
	 	
	int no,basamaksayisi;
	no,basamaksayisi=0;
 	printf("\n\n\n\n\n\n\n\n\n\n                                           1-Admin girisi\n                                           2-Ogrenci girisi");
 	printf("\n                                           Lutfen nasil giris yapacaginizi seciniz:");
 	scanf("%d",&m);
	system("CLS");
 	if(m==1){
 		printf("\n\n\n\n\n\n\n\n\n\n                                           Lutfen sifrenizi giriniz:");
 		scanf("%d",&no);
 		
	 }
	 if(m==2){
	 	printf("\n\n\n\n\n\n\n\n\n\n                                           Lutfen numaranizi giriniz:");
	 	scanf("%d",&no);
	 }
 	
	system("CLS");
 	printf("\n\n\n\n\n\n\n\n\n\n                                           Giris yapiliyor");
 	delay(0.5);
 	printf(".");
 	delay(0.5);
 	printf(".");
 	delay(0.5);
 	printf(".");
 	printf("\n");
 	system("CLS");
 	
 
 

 
 // ADMIN GIRISI	
 if(no==159753){
 
 while(1){
 	char secim;
 	printf("\n\n\n\n\n\n\n\n\n\n                                           1-Soru Ekle\n                                           2-Sorulari Goster ve Guncelle\n                                           3-Soru Sil\n                                           4-Oyunu oyna\n                                           5-Skorlari goster\n                                           6-Cikis\n");
 	printf("\n                                           Yapmak Istediginiz Islemi Secin:");
 	secim=getchar();
 	system("CLS");
 	switch (secim){
 		
 		case '1':
 			soru_ekle();break;
 		case '2':
		 	soru_gg();break;
		case '3':
			soru_sil();break;	
		case '4':
			oyna();break;	
		case '5':
			skorlar();break;	
		case '6':
			printf("\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("                                              Cikis yapiliyor");
			delay(0.5);
			printf(".");
			delay(0.5);
			printf(".");
			delay(0.5);
			printf(".");	
			system("CLS");
			exit(1);
		default:
			if(secim=='\0')printf("Gecersiz Islem",secim);	
		 }
	}
 }

 
 
 // KULLANICI GIRISI
 while(no!=0){
 		no/=10;
 		++basamaksayisi;
	}
 if(basamaksayisi==8){
 	while(1){
	char secim;
	printf("\n\n\n\n\n\n\n\n\n\n                                           1-Oyunu oyna\n                                           2-En yuksek skorlari goster\n                                           3-Cikis\n");
 	printf("\n                                          Yapmak Istediginiz Islemi Secin:");
	secim=getchar();
 	system("CLS");
	 switch(secim){
 		case '1':
 		 	oyna();break;
		case '2':
			skorlar();break;	
		case '3':
 			printf("\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("                                            Cikis yapiliyor");
			delay(0.5);
			printf(".");
			delay(0.5);
			printf(".");
			delay(0.5);
			printf(".");	
			system("CLS");
			exit(1);
		default:
			if(secim=='\0')printf("  Gecersiz islem.");	
	}
  }

 }
else{
	printf("\n\n\n\n\n\n\n\n\n\n                                           Hatali giris lutfen tekrar deneyiniz!");
	delay(2);
	system("CLS");
  }
 

}

}


 // SORU EKLE
void soru_ekle(){
 	printf("  \n                        SORU EKLE\n");
		printf("===========================================================\n");
 	FILE *fpp = fopen("sorular.txt","r");
 	int id=1;
 	int say=0;
 	while(!feof(fpp)){
 		fscanf(fpp,"%d %s %s %s %s %s %s\n",&soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.sik_D,soru.dogru_cevap);
 			 		if(soru.id==id){
 			id++;
		 }
		 
	say++;
	if(say>1000){
		break;
	}
	 }
	 soru.id=id;
	 fclose(fpp);
	FILE *fp = fopen("sorular.txt","a");
 	printf("  Soru metnini giriniz:");
 	gets(soru.soru);
 	gets(soru.soru);
 	bosluk(soru.soru);
 	
 	printf("  A sikkini giriniz:");
	gets(soru.sik_A);
	bosluk(soru.sik_A);
 	
 	printf("  B sikkini giriniz:");
 	gets(soru.sik_B);
 	bosluk(soru.sik_B);
 	
 	printf("  C sikkini giriniz:");
 	gets(soru.sik_C);
 	bosluk(soru.sik_C);
 	
 	printf("  D sikkini giriniz:");
 	gets(soru.sik_D);
 	bosluk(soru.sik_D);
	
 	printf("  Dogru sikki giriniz:");
	gets(soru.dogru_cevap);
 	
 	fprintf(fp,"\%d %s %s %s %s %s %s\n",soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.dogru_cevap);
 	system("CLS");
 	
 	printf("\n\n\n\n\n\n\n\n\n\n                                           Soru Kaydedildi.\n");
 	delay(2);
 	system("CLS");
 	ldg(1);

 	fclose(fp);
}


// SORU GOSTER VE GUNCELLE
void soru_gg(){
		printf("  \n                         SORULAR\n");
		printf("==========================================================\n");
		FILE *fpa = fopen("sorular.txt","r");
		if(fpa==NULL){
			printf("  Dosya acilamadi.");
			exit(1);
		}
		
		while(!feof(fpa)){
			fscanf(fpa,"%d %s %s %s %s %s %s\n",&soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.dogru_cevap);
			tire(soru.soru);
			tire(soru.sik_A);
			tire(soru.sik_B);
			tire(soru.sik_C);
			tire(soru.sik_D);
			tire(soru.dogru_cevap);
			printf("  %d)%s\n  A:%s \n  B:%s \n  C:%s \n  D:%s \n  Cevap:%s\n",soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.dogru_cevap);
			printf("-----------------------------------------------\n");
		}
		fclose(fpa);
		
		int islem;
		printf(" 1-Soru Guncelle\n 2-Geri\n");
		printf(" Isleminizi Giriniz:");
		scanf("%d",&islem);
		switch(islem){
			case 1:{
		int durum = 0;
		int id;
		FILE *fps;
		FILE *yedek;
		printf(" Guncellemek istediginiz sorunun idsini giriniz:");
		scanf("%d",&id);
		system("CLS");
		fps=fopen("sorular.txt","r");
		yedek=fopen("yedek.txt","w");
		if(fps==NULL){
			printf("Dosya acilamadi");
			exit(1);
		}
		int scm;
		printf("  Guncellemek istediginiz sorunun hangi kismini guncellemek istersiniz?\n  1-Soru metni\n  2-Sorunun siklari\n  3-Dogru cevabi\n  Seciminizi giriniz:");
		scanf("%d",&scm);
		while(!feof(fps)){
			fscanf(fps,"%d %s %s %s %s %s %s\n",&soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.dogru_cevap);
			
			if(id==soru.id){
	
			if(scm==1){
				printf("\n  %d-)%s  \n  A:%s \n  B:%s \n  C:%s \n  D:%s \n  Cevap:%s\n",soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.dogru_cevap);
				printf("\n  Soru metnini giriniz:");
			 	gets(soru.soru);
			 	gets(soru.soru);
			 	bosluk(soru.soru);
			}	
 			
		 	if(scm==2){
		 		printf("\n  %d-)%s  \n  A:%s \n  B:%s \n  C:%s \n  D:%s \n  Cevap:%s\n",soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.dogru_cevap);
		 		printf("\n  A sikkini giriniz:");
				gets(soru.sik_A);
				gets(soru.sik_A);
				bosluk(soru.sik_A);
			 		
			 	printf("  B sikkini giriniz:");
			 	gets(soru.sik_B);
			 	bosluk(soru.sik_B);
			 	
			 	printf("  C sikkini giriniz:");
			 	gets(soru.sik_C);
			 	bosluk(soru.sik_C);
			 	
			 	printf("  D sikkini giriniz:");
			 	gets(soru.sik_D);
			 	bosluk(soru.sik_D);
			 }
		 	
			if(scm==3){
				printf("\n  %d-)%s  \n  A:%s \n  B:%s \n  C:%s \n  D:%s \n  Cevap:%s\n",soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.dogru_cevap);
				printf("\n  Dogru sikki giriniz:");
		 		gets(soru.dogru_cevap);
		 		gets(soru.dogru_cevap);
			}
		 	
		 
		 	fprintf(yedek,"%d %s %s %s %s %s %s\n",id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.dogru_cevap);
		 	system("CLS");
		 	
		 	printf("\n\n\n\n\n\n\n\n\n\n                                           Soru Kaydedildi.");
		 	delay(2);
		 	system("CLS");
			}
			else{
				fprintf(yedek,"%d %s %s %s %s %s %s\n",soru.id,soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.dogru_cevap);
			}
			}

	
			fclose(fps);
			fclose(yedek);
				remove("sorular.txt");
				rename("yedek.txt","sorular.txt");
				printf("\n\n\n\n\n\n\n\n\n\n                                           Devam etmek icin bir tusa basiniz.");
			fflush(stdin);
			getch();
			system("CLS");
			ldg(1);
				break;
			}
			case 2:{
				system("CLS");
				ldg(1);
				break;
			}
			
		}
		
			
	}
	

// SORU SIL	
void soru_sil(){
		system("cls");
		printf("\n                       SORU SIL\n");
		printf("=========================================================\n");	
		FILE *ppp=fopen("sorular.txt","r");	
		while(!feof(ppp)){
			fscanf(ppp,"%d %s %s %s %s %s %s\n",&soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.dogru_cevap);
			//Soru metnindeki '_' karakterleri boþluða çevriliyor
			tire(soru.soru);
			//--------------------------------------------------
			printf("  %d) %s \n", soru.id, soru.soru);									
		}		
		printf("=========================================================\n");
		fclose(ppp);
		fclose(ppp);
		int a,b;
		//Silinecek soru id eðer sorular.txt içinde yoksa geçerli bir id isteniyor
		do{			
		b=0;
		printf("  Silmek istediginiz soru id numarasini girin: ");
		scanf("%d", &a);
		FILE *filep=fopen("sorular.txt","r");
		while(!feof(filep)){
				fscanf(filep,"%d %s %s %s %s %s %s\n",&soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.dogru_cevap);
				if(soru.id == a){
					b++;
				}
		}
		if(b!=1){
			printf("  Lutfen gecerli bir id numarasi girin\n ");
		}
		fclose(filep);
		
		}
		while(b!=1);
		//----------------------------------------------------------------------
		
		//Silinecek soru_id'ye sahip soru hariç diðer tüm sorular geçici bir dosyaya aktarýlýp sorular.txt dosyasýný silinerek geçici dosyanýn adý sorular.txt yapýlýyor
		FILE *fk =fopen("sorular.txt","r");
		FILE *fss=fopen("sorular1.txt","w");
		fclose(fss);
		FILE *fs=fopen("sorular1.txt","a");
		int a1 = 0;
		while(!feof(fk)){
			fscanf(fk,"%d %s %s %s %s %s %s\n",&soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.dogru_cevap);
			if(a==soru.id){
				printf("\n  SORU SILINIYOR");
				delay(0.5);
				printf(".");
				delay(0.5);
				printf(".");
				delay(0.5);
				printf(".\n");
				delay(0.5);
			}
			else{
				a1++;
				fprintf(fs,"%d %s %s %s %s %s %s\n",a1,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.dogru_cevap);
			}
		
		}
		system("CLS");
		fclose(fk);
		fclose(fs);
		int status;
		status = remove("sorular.txt");
  		if (status == 0) {
		  printf("\n\n\n\n\n\n\n\n\n\n                                           Soru basariyla silindi.\n");
		  delay(3);
		  system("CLS");
		  ldg(1);
	}
  		else{
   			printf("\n  Sorular.txt silinemedi\n");
    		perror("Hata");
  		}
		rename("sorular1.txt","sorular.txt");
		//--------------------------------------------------------------------------
}


// OYUNU OYNA
void oyna(){
srand(time(NULL));
int soru_sayisi=0;
FILE *fpm = fopen("sorular.txt","r");
while(!feof(fpm)){
	fscanf(fpm,"%d %s %s %s %s %s %s\n",&soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,soru.dogru_cevap);
	soru_sayisi++;
}
fclose(fpm);
if(soru_sayisi<5){
	printf("\n  Yeterli soru yoktur.");
	delay(4);
	return;
}
	int a=rand()%soru_sayisi+1,b=rand()%soru_sayisi+1,c=rand()%soru_sayisi+1,d=rand()%soru_sayisi+1,e=rand()%soru_sayisi+1;

	while(a==b || a==c || a==d || a==e){
	a=rand()%soru_sayisi+1;
	}
	while(b==a || b==c || b==d || b==e){
	b=rand()%soru_sayisi+1;
	}
	while(c==a || c==b || c==d || c==e ){
	c=rand()%soru_sayisi+1;
	}
	while(d==a || d==b || d==c || d==e){
	d=rand()%soru_sayisi+1;
	}
	while(e==a || e==b || e==c || e==d){
	e=rand()%soru_sayisi+1;
	}
int i=1;
int j=0;
int k=0;
int z=1;
int t=0;
char cevaplar[5];
char kisi_cevabi[5];
kullanici.puan=0;

FILE *fpmm = fopen("sorular.txt","r");
while(!feof(fpmm)){
	fscanf(fpmm,"%d %s %s %s %s %s %c\n",&soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,&soru.dogru_cevap[0]);
	tire(soru.soru);
	tire(soru.sik_A);
	tire(soru.sik_B);
	tire(soru.sik_C);
	tire(soru.sik_D);
	
	if(a==soru.id ){
		printf("\n\n\n\n\n\n\n\n\n                                 %d- %s \n                                 A:%s \n                                 B:%s \n                                 C:%s \n                                 D:%s\n                                 Cevabiniz:",i,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D);
		do{
		scanf("%c",&kisi_cevabi[k]);
		scanf("%c",&kisi_cevabi[k]);
		if(kisi_cevabi[k] != 'a' && kisi_cevabi[k] != 'b' && kisi_cevabi[k] != 'c' && kisi_cevabi[k] != 'd' && kisi_cevabi[k] != 'A' && kisi_cevabi[k] != 'B' && kisi_cevabi[k] != 'C' && kisi_cevabi[k] != 'D' ){
			printf("  Hatali cevap girdiniz lutfen tekrar deneyiniz:");
		}
		else break;
}
while(1);
	 k++;
		i++;
		cevaplar[j]=soru.dogru_cevap[0];
		j++;
		printf("----------------------------------------------\n");
	
	}
	system("CLS");
}
fclose(fpmm);
FILE *fp1 = fopen("sorular.txt","r");
while(!feof(fp1)){
	fscanf(fp1,"%d %s %s %s %s %s %c\n",&soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,&soru.dogru_cevap[0]);
	tire(soru.soru);
	tire(soru.sik_A);
	tire(soru.sik_B);
	tire(soru.sik_C);
	tire(soru.sik_D);
	
	if(b==soru.id){
		printf("\n\n\n\n\n\n\n\n\n                                 %d- %s \n                                 A:%s \n                                 B:%s \n                                 C:%s \n                                 D:%s\n                                 Cevabiniz:",i,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D);
		do{
		scanf("%c",&kisi_cevabi[k]);
		scanf("%c",&kisi_cevabi[k]);
		if(kisi_cevabi[k] != 'a' && kisi_cevabi[k] != 'b' && kisi_cevabi[k] != 'c' && kisi_cevabi[k] != 'd' && kisi_cevabi[k] != 'A' && kisi_cevabi[k] != 'B' && kisi_cevabi[k] != 'C' && kisi_cevabi[k] != 'D' ){
			printf("  Hatali cevap girdiniz lutfen tekrar deneyiniz:");
		}
		else break;
}
while(1);
		k++;
		i++;
		cevaplar[j]=soru.dogru_cevap[0];
		j++;
		printf("----------------------------------------------\n");
	
	}
	system("CLS");
}
fclose(fp1);
FILE *fp2 = fopen("sorular.txt","r");
while(!feof(fp2)){
	fscanf(fp2,"%d %s %s %s %s %s %c\n",&soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,&soru.dogru_cevap[0]);
	tire(soru.soru);
	tire(soru.sik_A);
	tire(soru.sik_B);
	tire(soru.sik_C);
	tire(soru.sik_D);
	
	if(c==soru.id){
		printf("\n\n\n\n\n\n\n\n\n                                 %d- %s \n                                 A:%s \n                                 B:%s \n                                 C:%s \n                                 D:%s\n                                 Cevabiniz:",i,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D);
		do{
		scanf("%c",&kisi_cevabi[k]);
		scanf("%c",&kisi_cevabi[k]);
		if(kisi_cevabi[k] != 'a' && kisi_cevabi[k] != 'b' && kisi_cevabi[k] != 'c' && kisi_cevabi[k] != 'd' && kisi_cevabi[k] != 'A' && kisi_cevabi[k] != 'B' && kisi_cevabi[k] != 'C' && kisi_cevabi[k] != 'D' ){
			printf("  Hatali cevap girdiniz lutfen tekrar deneyiniz:");
		}
		else break;
}
while(1);
		k++;
		i++;
		cevaplar[j]=soru.dogru_cevap[0];
		j++;
		printf("----------------------------------------------\n");
	
	}
	system("CLS");
}
fclose(fp2);
FILE *fp3 = fopen("sorular.txt","r");
while(!feof(fp3)){
	fscanf(fp3,"%d %s %s %s %s %s %c\n",&soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,&soru.dogru_cevap[0]);
	tire(soru.soru);
	tire(soru.sik_A);
	tire(soru.sik_B);
	tire(soru.sik_C);
	tire(soru.sik_D);
	
	if(d==soru.id){
		printf("\n\n\n\n\n\n\n\n\n                                 %d- %s \n                                 A:%s \n                                 B:%s \n                                 C:%s \n                                 D:%s\n                                 Cevabiniz:",i,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D);
		do{
		scanf("%c",&kisi_cevabi[k]);
		scanf("%c",&kisi_cevabi[k]);
		if(kisi_cevabi[k] != 'a' && kisi_cevabi[k] != 'b' && kisi_cevabi[k] != 'c' && kisi_cevabi[k] != 'd' && kisi_cevabi[k] != 'A' && kisi_cevabi[k] != 'B' && kisi_cevabi[k] != 'C' && kisi_cevabi[k] != 'D' ){
			printf("  Hatali cevap girdiniz lutfen tekrar deneyiniz:");
		}
		else break;
}
while(1);
		k++;
		i++;
		cevaplar[j]=soru.dogru_cevap[0];
		j++;
		printf("----------------------------------------------\n");
	}
	system("CLS");
}
fclose(fp3);
FILE *fp4 = fopen("sorular.txt","r");
while(!feof(fp4)){
	fscanf(fp4,"%d %s %s %s %s %s %c\n",&soru.id,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D,&soru.dogru_cevap[0]);
	tire(soru.soru);
	tire(soru.sik_A);
	tire(soru.sik_B);
	tire(soru.sik_C);
	tire(soru.sik_D);
	
	if(e==soru.id){
		printf("\n\n\n\n\n\n\n\n\n                                 %d- %s \n                                 A:%s \n                                 B:%s \n                                 C:%s \n                                 D:%s\n                                 Cevabiniz:",i,soru.soru,soru.sik_A,soru.sik_B,soru.sik_C,soru.sik_D);
			do{
		scanf("%c",&kisi_cevabi[k]);
		scanf("%c",&kisi_cevabi[k]);
		if(kisi_cevabi[k] != 'a' && kisi_cevabi[k] != 'b' && kisi_cevabi[k] != 'c' && kisi_cevabi[k] != 'd' && kisi_cevabi[k] != 'A' && kisi_cevabi[k] != 'B' && kisi_cevabi[k] != 'C' && kisi_cevabi[k] != 'D' ){
			printf("                                 Hatali cevap girdiniz lutfen tekrar deneyiniz:");
		}
		else break;
}
while(1);
		k++;
		i++;
		cevaplar[j]=soru.dogru_cevap[0];
		j++;
		printf("----------------------------------------------\n");
	
	}
	system("CLS");
}
fclose(fp4);
int v=1;
int l=1;

while(z < 6){
	if(kisi_cevabi[t]==cevaplar[t]){
		kullanici.puan+=10;
	}
	printf("\n                                 %d. soruya cevabiniz: %c --- %d. sorunun dogru cevabi: %c\n",v ,kisi_cevabi[t],l,cevaplar[t]);
	t++;
	z++;
	v++;
	l++;
}

	printf("\n                                 Puaniniz : %d\n",kullanici.puan);
	printf("\n                                 Lutfen kullanici adi giriniz:");
	gets(kullanici.kullanici_adi);
	gets(kullanici.kullanici_adi);
	bosluk(kullanici.kullanici_adi);
	FILE *fpsk=fopen("skorlar.txt","a");
	fprintf(fpsk,"%s %d\n",kullanici.kullanici_adi,kullanici.puan);
	printf("\n                                 Skorunuz kaydedildi.\n");
	delay(0.75);
	printf("\n\n                                 Ana menuye yonlendiriliyorsunuz");
	delay(0.5);
	printf(".");
	delay(0.5);
	printf(".");
	delay(0.5);
	printf(".");
	system("CLS");
	ldg(1);
	fclose(fpsk);
}


// SKOR GOSTER
void skorlar(){
	int sayac=0;
	int v=1;
	FILE *fpskk=fopen("skorlar.txt","r");
	FILE *fpsk1=fopen("skorlar_.txt","a");
	while(!feof(fpskk)){	
		fscanf(fpskk,"%s %d\n",kullanici.kullanici_adi,&kullanici.puan);
		if(kullanici.puan==50){
			fprintf(fpsk1,"%s %d\n",kullanici.kullanici_adi,kullanici.puan);
		}
	}
fclose(fpskk);
fclose(fpsk1);
	fopen("skorlar.txt","r");
	fpsk1=fopen("skorlar_.txt","a");
	while(!feof(fpskk)){	
	fscanf(fpskk,"%s %d\n",kullanici.kullanici_adi,&kullanici.puan);
	if(kullanici.puan==40){
		fprintf(fpsk1,"%s %d\n",kullanici.kullanici_adi,kullanici.puan);
	}
}
fclose(fpskk);
fclose(fpsk1);
	fpskk=fopen("skorlar.txt","r");
	fpsk1=fopen("skorlar_.txt","a");
	while(!feof(fpskk)){	
	fscanf(fpskk,"%s %d\n",kullanici.kullanici_adi,&kullanici.puan);
	if(kullanici.puan==30){
		fprintf(fpsk1,"%s %d\n",kullanici.kullanici_adi,kullanici.puan);
	}
}
fclose(fpskk);
fclose(fpsk1);
	fpskk=fopen("skorlar.txt","r");
	fpsk1=fopen("skorlar_.txt","a");
	while(!feof(fpskk)){
	fscanf(fpskk,"%s %d\n",kullanici.kullanici_adi,&kullanici.puan);
	if(kullanici.puan==20){
		fprintf(fpsk1,"%s %d\n",kullanici.kullanici_adi,kullanici.puan);
	}
}
fclose(fpskk);
fclose(fpsk1);
	fpskk=fopen("skorlar.txt","r");
	fpsk1=fopen("skorlar_.txt","a");
	while(!feof(fpskk)){	
	fscanf(fpskk,"%s %d\n",kullanici.kullanici_adi,&kullanici.puan);
	if(kullanici.puan==10){
		fprintf(fpsk1,"%s %d\n",kullanici.kullanici_adi,kullanici.puan);
	}
}
fclose(fpskk);
fclose(fpsk1);
	fpskk=fopen("skorlar.txt","r");
	fpsk1=fopen("skorlar_.txt","a");
	while(!feof(fpskk)){	
	fscanf(fpskk,"%s %d",kullanici.kullanici_adi,&kullanici.puan);
	if(kullanici.puan==0){
	fprintf(fpsk1,"%s %d\n",kullanici.kullanici_adi,kullanici.puan);
	}
}
fclose(fpskk);
fclose(fpsk1);
remove("skorlar.txt");
rename("skorlar_.txt","skorlar.txt");
	
		printf("------------------------En yuksek skorlar----------------------\n\n");
		delay(1.2);


	fpsk1=fopen("skorlar.txt","r");
	while(!feof(fpsk1)){
		if(sayac==3){
			break;
		}
		fscanf(fpsk1,"%s %d\n\n",kullanici.kullanici_adi,&kullanici.puan);
		tire(kullanici.kullanici_adi);
		if(kullanici.puan==50){
			printf("\n  %d-)%s-%d\n",v,kullanici.kullanici_adi,kullanici.puan);
			delay(1);
			sayac++;
			v++;
		}	 
	 }
	 fclose(fpsk1);
	 fpsk1=fopen("skorlar.txt","r");
	 while(!feof(fpsk1)){
	 	if(sayac==3){
			break;
		}
		fscanf(fpsk1,"%s %d\n",kullanici.kullanici_adi,&kullanici.puan);
		tire(kullanici.kullanici_adi);
		if(kullanici.puan==40){
			printf("\n  %d-)%s-%d\n",v,kullanici.kullanici_adi,kullanici.puan);
			delay(1);
			sayac++;
			v++;
		}	 
	 }
	 fclose(fpsk1);
	 fpsk1=fopen("skorlar.txt","r");
	 while(!feof(fpsk1)){
	 	if(sayac==3){
			break;
		}
		fscanf(fpsk1,"%s %d\n",kullanici.kullanici_adi,&kullanici.puan);
		tire(kullanici.kullanici_adi);
		if(kullanici.puan==30){
			printf("\n  %d-)%s-%d\n",v,kullanici.kullanici_adi,kullanici.puan);
			tire(kullanici.kullanici_adi);
			delay(1);
			sayac++;
			v++;
		}	 
	 }
	 fclose(fpsk1);
	 fpsk1=fopen("skorlar.txt","r");
	 while(!feof(fpsk1)){
	 	if(sayac==3){
			break;
		}
		fscanf(fpsk1,"%s %d\n",kullanici.kullanici_adi,&kullanici.puan);
		tire(kullanici.kullanici_adi);
		if(kullanici.puan==20){
			printf("\n  %d-)%s-%d\n",v,kullanici.kullanici_adi,kullanici.puan);
			
			delay(1);
			sayac++;
			v++;
		}	 
	 }
	 fclose(fpsk1);
	 fpsk1=fopen("skorlar.txt","r");
	 while(!feof(fpsk1)){
	 	if(sayac==3){
			break;
		}
		fscanf(fpsk1,"%s-%d\n",kullanici.kullanici_adi,&kullanici.puan);
		tire(kullanici.kullanici_adi);
		if(kullanici.puan==10){
			printf("\n  %d-)%s %d\n",v,kullanici.kullanici_adi,kullanici.puan);
			delay(1);
			sayac++;
			v++;
		}	 
	 }
	 fclose(fpsk1);
	 fpsk1=fopen("skorlar.txt","r");
	 while(!feof(fpsk1)){
	 	if(sayac==3){
			break;
		}
		fscanf(fpsk1,"%s %d\n",kullanici.kullanici_adi,&kullanici.puan);
		tire(kullanici.kullanici_adi);
		if(kullanici.puan==0){
			printf("\n  %d-)%s-%d\n",v,kullanici.kullanici_adi,kullanici.puan);
			delay(1);
			sayac++;
			v++;
		}	 
	 }
	 printf("\n  5 saniye sonra ana menuye yonlendirileceksiniz");
	 delay(0.9);
	 printf(".");
	 delay(0.9);
	 printf(".");
	 delay(0.9);
	 printf(".");
	 delay(0.9);
	 printf(".");
	 delay(0.9);
	 printf(".");
	 delay(0.5);
	 ldg(1);
	 fclose(fpsk1);
}


// DELAY FONKSÝYONU
void delay(float number_of_seconds){
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Stroing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds);
}


// BOSLUGU ALT TIREYE CEVIRME
void bosluk(char a[150]){
		int i = 0;
		while(a[i]!='\0'){
 		if(a[i]==' '){
 			a[i]='_';
		 }
		 i++;
	 }
	}
	

// ALT TIREYI BOSLUGA CEVIRME
void tire(char a[150]){
		int i = 0;
		while(a[i]!='\0'){
 		if(a[i]=='_'){
 			a[i]=' ';
		 }
		 i++;
	 }
	}
	

// LOADING SCREEN
void ldg(int a){ // kac kere dönmesini istiyorsan
	system("color 06");
	system("cls");
	void d(int x){
    int milli_seconds = 100*x; 
    clock_t start_time = clock();  
    while (clock() < start_time + milli_seconds);        
} 
	void xy(int x, int y){
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
		while(a>0){
	xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf("...");
	d(1);
	system("cls");
	xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf(".. .");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf(". . .");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf(" . . .");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf("  . . .");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf("   . . .");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf("    . . .");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf("     . ..");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf("      ...");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf("     . ..");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf("    . . .");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf("   . . .");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf("  . . .");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf(" . . .");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf(". . .");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf(".. .");
	d(1);
	system("cls");
		xy(45,12);
	printf("YUKLENIYOR");
	xy(45,13);
	printf("...");
	d(1);
	system("cls");
	a--;
	}
   info.bVisible = TRUE;
   info.dwSize = 15;
   SetConsoleCursorInfo(consoleHandle, &info);
}
