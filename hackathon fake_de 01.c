#include<stdio.h>

int main(){
	int arr[100];
	int choice,i,j,size,max;
	int num_add,position,num_delete,temp,num_find;
	int check=-1;
	
	while(choice!=9){
	printf("\n MENU \n \n 1.Nhap so phan tu can nhap va gia tri cac phan tu\n 2.In ra gia tri cac phan tu dang quan ly\n 3.In ra gia tri lon nhat cua mang\n 4.In ra cac phan tu la so nguyen to trong mang\n 5.Them mot phan tu vao trong mang\n 6.Xoa mot phan tu trong mang\n 7.Sap xep mang theo thu tu tang dan\n 8.Tim kiem phan tu (nguoi dung nhap) va in ra vi tri index cua phan tu do\n 9.Thoat\n lua chon cua ban: ");
    scanf("%d",&choice);
    
    switch(choice){
    	//1.Nhap so phan tu can nhap va gia tri cac phan tu
		case 1:
    		printf("moi nhap so phan tu: ");
    		scanf("%d",&size);
    			
                for(i=0;i<size;i++){
                	
                	printf("moi nhap gia tri phan tu arr[%d]: ",i);
    		scanf("%d",&arr[i]);
				}
				break;
		//2.In ra gia tri cac phan tu dang quan ly
		case 2:
		  for(i=0;i<size;i++){
                	
                	printf("arr[%d]=%d \n",i,arr[i]);
                }
                	break;
        //3.In ra gia tri lon nhat cua mang
        case 3:
			for(i=0;i<size;i++){
				if(arr[i]>max){
					max=arr[i];
				}
				
			}printf("gia tri lon nhat la: %d",max);
			break;
		//4.In ra cac phan tu la so nguyen to trong mang
		case 4:
			for(i=0;i<size;i++){
				if(arr[i]==2 || arr[i]==3|| arr[i]==5|| arr[i]==7 || arr[i]!=1 &&arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%4!=0 && arr[i]%5!=0 && arr[i]%6!=0 &&arr[i]%7!=0 &&arr[i]%8!=0 &&arr[i]%9!=0 ){
				printf("arr[%d] = %d la so nguyen to\n",i,arr[i]);	
					
					
				}
			}
			break;
		//5.Them mot phan tu vao trong mang
		case 5:
			printf("moi nhap phan tu muon them: ");
			scanf("%d", &num_add);
			
				printf("moi nhap vi tri muon them arr[]: ");
			scanf("%d", &position);
    	if(position<0 || position>size){
    	printf("vi tri muon them khong hop le\n");	
    	}else{
    		for(i=size;i>position;i--){
    			arr[i]=arr[i-1];
    			
    			
    			
			}
    	size++;
    	arr[position]=num_add;
		}
		break;
		//6.Xoa mot phan tu trong mang
		case 6: 
		printf("moi nhap phan tu muon xoa arr[]: ");
		scanf("%d", &num_delete);
    	
    	if (num_delete<0 || num_delete>size){
    		printf("phan tu muon xoa khong hop le \n");
		}else{
			size--;
			for(i=num_delete;i<size;i++){
				arr[i]=arr[i+1];
			}
		
		}
		break;
		//7.Sap xep mang theo thu tu tang dan
		case 7:
	     for(i=0;i<size;i++){
	     	for(j=0;j<size-i-1;j++){
	     		if (arr[j+1]<arr[j]){
	     			temp=arr[j];
	     			arr[j]=arr[j+1];
	     			arr[j+1]=temp;
				 }
	     		
	     		
			 }
		 }
		 printf("mang sau khi sap xep: \n");
		 for(i=0;i<size;i++){
		 	printf("%d\t",arr[i]);
		
		 }
		 
		 break;
		 //8.Tim kiem phan tu (nguoi dung nhap) va in ra vi tri index cua phan tu do
		 case 8:
		 	printf("moi nhap phan tu muon tim: ");
		 	scanf("%d", &num_find);
		 	
		 for(i=0;i<size;i++){
		 	if (arr[i]==num_find){
		 		printf("phan tu nam o vi tri arr[%d]",i);
		 		check++;
			 }
		 	
		 }
		 if(check==-1){
		 	printf("khong tim thay phan tu\n");
		 }
    	 break;
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
    	
	}

}
	

	
	

   return 0;
}

