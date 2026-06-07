import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n1=sc.nextInt();
        int arr1[] = new int[n1];
        for(int i=0;i<n1;i++){
            arr1[i]=sc.nextInt();
        }

        int n2=sc.nextInt();
        int arr2[] = new int[n2];
        for(int i=0;i<n2;i++){
            arr2[i]=sc.nextInt();
        }

        int i=0,j=0,k=0;
        int res[] = new int[n1+n2];

        while(i<n1 && j<n2){
            if(arr1[i]<arr2[j]){
                res[k]=arr1[i];
                i++;
            }
            else{
                res[k]=arr2[j];
                j++;
            }
            k++;
        }

        while(i<n1){
            res[k]=arr1[i];
            i++;
            k++;
        }

        while(j<n2){
            res[k]=arr2[j];
            j++;
            k++;
        }

        for(int itr=0;itr<n1+n2;itr++){
            System.out.print(res[itr]+" ");
        }
    }
}