#include<stdio.h>
	int tinhtiendien(int dien) {
	int tinhtiendien =0;
		if(dien<=50){
			tinhtiendien = dien*10000;
		}else if(dien <=100<150){
			tinhtiendien= 50*10000+(dien-50)*15000;
		}else if(dien<=150<200){
			tinhtiendien=50*10000+100*15000+(dien-100)*20000;
		}else if(dien<=200){
			tinhtiendien=50*10000+100*15000+150*20000+(dien-150)*25000;	
		}else {
			tinhtiendien=50*10000+100*15000+150*20000+150*25000+(dien-200)*30000;
		}
		
		return tinhtiendien;
	}
int main(){
	int chisocu,chisomoi,sodien,tiendien;
	printf("nhap chi so cu :");
	scanf("%d",&chisocu);
	printf("nhap chi so moi :");
	scanf("%d",&chisomoi);
	if (chisomoi < chisocu){
		printf("chi so moi phai lon hon chi so cu.\n");
			return 1;	
	}
	sodien = chisomoi-chisocu;
	printf("so dien tieu thu trong thang: %d kWh\n",sodien);
	tiendien=tinhtiendien(sodien);
	printf("so tien dien phai tra: %d VND\n",tiendien);
	return 0;

}

