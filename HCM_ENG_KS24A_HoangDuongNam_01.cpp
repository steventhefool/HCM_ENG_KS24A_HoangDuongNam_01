#include <stdio.h>
using namespace std;
int main (){
		while (1){
			int n, a[100], choice;
			printf ("=================MENU==============\n");
			printf ("1. Nhap so phan tu va gan gia tri cho mang.\n");
			printf ("2. In ra gia tri cac phan tu trong mang.\n");
			printf ("3. Tim gia tri nho nhat va lon nhat trong mang.\n");
			printf ("4. In ra tong cua tat ca cac phan tu.\n");
			printf ("5. Them mot phan tu vao cuoi mang, phan tu moi them vao mang phai do nguoi dung nhap vao.\n");
			printf ("6. Xoa mot phan tu tai mot vi tri cu the (nguoi dung nhap vi tri).\n");
			printf ("7. Sap xep mang theo thu tu giam dan (Bubble sort).\n");
			printf ("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong (Linear search).\n");
			printf ("9. In ra toan bo so nguyen to trong mang.\n");
			printf ("10. Sap xep mang theo thu tu tang dan (Selection sort).\n");
			printf ("11. Thoat.\n");
			printf ("Lua chon cua ban: ");
			scanf ("%d",&choice);
			switch (choice){
				case 1: {
					printf ("Nhap so phan tu trong mang: ");
					scanf ("%d",&n);
					for (int i =0;i<n;i++){
						printf ("Nhap gia tri cua phan tu thu %d: ",i);
						scanf ("%d",&a[i]);
					}
					break;
				}
				case 2: {
					for (int i =0; i<n;i++){
						printf ("Gia tri cac phan tu trong mang la: arr[%d] = %d\n",i,a[i]);
					}
					break;
				}
				case 3: {
					int max=a[0],min=a[0];
					for (int i =1; i<n;i++){
						if (max < a[i]){
							max =a[i];
						}
						if (min > a[i]){
							min =a[i];
						}
					}
					printf ("Gia tri nho nhat la: %d\n",min);
					printf ("Gia tri lon nhat la: %d\n",max);
					break;
				}
				case 4:{
					int sum=0;
					for (int i =0;i<n;i++){
						sum+=a[i];
					}
					printf ("Tong cua tat ca cac phan tu la: %d\n",sum);
					break;
				}
				case 5: {
					int value;
					printf ("Nhap them mot phan tu vao cuoi mang: ");
					scanf ("%d",&value);
					n++;
					a[n-1]=value;
					break;
				}
				case 6:{
					int dlt_index;
					printf ("Nhap vao vi tri can xoa: ");
					scanf ("%d",&dlt_index);
					if (dlt_index <0){
						printf ("vi tri xoa khong hop le.");
					}
					else if (dlt_index >=0){
						if (dlt_index <n){
							for (int i =dlt_index;i<n;i++){
								a[i]=a[i+1];
							}
							n--;
						}
						if (dlt_index >n){
							printf ("vi tri xoa khong hop le");
						}
					}
					break;
				}
				case 7:{
					for (int i =0;i<n-1;i++){
						for (int j =i+1;j<n;j++){
							if (a[i]<a[j]){
								int temp = a[i];
								a[i]=a[j];
								a[j]=temp;
							}
						}
					}
					break;
				}
				case 8:{
					int search,i,cnt=0;
					printf ("Nhap vao phan tu can tim kiem: ");
					scanf ("%d",&search);
					for (i =0; i<n;i++){
						if (search == a[i]){
							cnt++;
							break;
						}
					}
					if (cnt==1){
						printf ("phan tu can tim kiem %d nam o vi tri %d.\n",search,i);
					}
					else {
						printf ("Phan tu can tim kiem khong ton tai o trong mang.\n");
					}
					break;
				}
				case 9: {
           			     int foundPrime = 0;
           			     for (int i = 0; i < n; i++) {
             			     int num = a[i];
			             if (num >= 2) {
                        		int isPrime = 1;
           			        for (int j = 2; j * j <= num; j++) {
         				       if (num % j == 0) {
              					      isPrime = 0;
              		            break;
            			       	       }	
         		            	}
              			    if (isPrime) {
             				printf("%d ", num);
                			foundPrime = 1;
           			    }
      		  		    }
   				    }
  				  if (!foundPrime) {
       					 printf("Mang khong co so nguyen to.\n");
  				  } 
					else {
       				 printf("\n");
   				 }
  				 break;
				 }
				case 10:{
						for (int i =0;i<n;i++){
						int min_index=i;
						for (int j=i+1; j <n;j++){
							if (a[j]<a[min_index]){
								min_index=j;
							}		
						}
							int temp = a[i];
							a[i]=a[min_index];
							a[min_index]=temp;
						}
					break;
				}
				case 11: {
					printf ("Thoat khoi chuong trinh.\n");
					return 0;
				}
				default: {
					printf ("lua chon cua ban khong hop le.");
					break;
				}
				}
		}
}

