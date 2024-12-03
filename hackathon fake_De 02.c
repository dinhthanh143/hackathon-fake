#include<stdio.h>

int main(){
int choice=0;
int rows,cols,i,j,find_num,temp;
int arr[100][100];
int check=0;
int tich_bien=1;

while(choice!=8){
	printf("\n MENU \n\n 1.Nhap kich co va gia tri cac phan tu cua mang\n 2.In gia tri cac phan tu theo ma tran\n 3.In ra cac phan tu tren duong bien va tinh tich \n 4.In ra cac phan tu nam tren duong cheo chinh\n 5.In ra cac phan tu nam tren duong cheo phu \n 6.Sap xep duong cheo chinh theo thu tu tang dan\n 7.Tim kiem phan tu va in ra vi tri phan tu do \n 8.Thoat\n Lua chon cua ban: ");
	scanf("%d", &choice);
	
	switch(choice){
	//1.Nhap kich co va gia tri cac phan tu cua mang
	case 1:
		printf("\n moi nhap so hang: ");
		scanf("%d",&rows);
			printf("moi nhap so cot: ");
		scanf("%d",&cols);
	
		for(i=0;i<rows;i++){
			for(j=0;j<cols;j++){
			printf("moi nhap gia tri cho phan tu arr[%d][%d]= ",i,j);
			scanf("%d", &arr[i][j]);
		}
		}
		break;
	//2.In gia tri cac phan tu theo ma tran
	case 2:
		for(i=0;i<rows;i++){
			printf("\n");
			for(j=0;j<cols;j++){
		printf("%d\t", arr[i][j]);
	}
}
        break;
    //4.In ra cac phan tu nam tren duong cheo chinh
    case 4:
    	if(rows!=cols){
    		printf("\n so hang can bang so cot!\n");
		}else{
			j=0;
		for(i=0;i<rows;i++){
			
		printf("%d\t",arr[i][j]);
			j++;
		}
		}
		break;
	//5.In ra cac phan tu nam tren duong cheo phu
	case 5:
			if(rows!=cols){
    		printf("\n so hang can bang so cot!\n");
		}else{
			j=cols-1;
		for(i=0;i<rows;i++){
			
		printf("%d\t",arr[i][j]);
			j--;
			
			
		}
		}
		break;
	//7.Tim kiem phan tu va in ra vi tri phan tu do
	case 7:
		printf("moi nhap phan tu muon tim: ");
		scanf("%d",&find_num);
		
		for(i=0;i<rows;i++){
			for(j=0;j<cols;j++){
			if(arr[i][j]==find_num){
				printf("phan tu o vi tri: arr[%d][%d] \n",i,j);
				check++;
			}	
				
				
				
			}
		} 
		if(check==0){
			printf("phan tu khong co trong mang \n");
		}
	   break;
	   
	//6.Sap xep duong cheo chinh theo thu tu tang dan
	case 6:
			if(rows!=cols){
    		printf("\n so hang can bang so cot!\n");
		}else{
			j=0;
		for(i=0;i<rows-1;i++){
			
			if(arr[i+1][j+1]<arr[i][j]){
				temp=arr[i+1][j+1];
				arr[i+1][j+1]=arr[i][j];
				arr[i][j]=temp;
				
			}
			j++;
			
		}
		
		j=0;
		for(i=0;i<rows;i++){
			
		printf("%d\t",arr[i][j]);
			j++;
		}
		
		
		}
		
		break;
		
	//3.In ra cac phan tu tren duong bien va tinh tich
	case 3:
		if (rows==2){
			for(i=0;i<1;i++){
				for(j=0;j<cols;j++){
				printf("%d\t",arr[i][j]);	
				tich_bien=tich_bien*arr[i][j];
				}
				
			}
			printf("\n");
			
			for(i=rows-1;i<=rows-1;i++){
				for(j=0;j<cols;j++){
				printf("%d\t",arr[i][j]);	
				tich_bien =tich_bien*arr[i][j];
				}
				}
			printf("\n tich la : %d",tich_bien);
			
			
		}else{
			for(i=0;i<1;i++){
				for(j=0;j<cols;j++){
				printf("%d\t",arr[i][j]);
				tich_bien =tich_bien*arr[i][j];	
				}
				}
				printf("\n");
				
				for(i=1;i<rows-1;i++){
					j=0;
						printf("%d\t",arr[i][j]);
					tich_bien =tich_bien*arr[i][j];
					
				}
				
				for(i=1;i<rows-1;i++){
					j=cols-1;
						printf("%d\t",arr[i][j]);
					tich_bien =tich_bien*arr[i][j];
				}
				printf("\n");
				for(i=rows-1;i<=rows-1;i++){
				for(j=0;j<cols;j++){
				printf("%d\t",arr[i][j]);
					
				tich_bien =tich_bien*arr[i][j];
				}
				}
			printf("\n tich la : %d",tich_bien);
			
		}
		
		
	}
	

}

   return 0;
}

