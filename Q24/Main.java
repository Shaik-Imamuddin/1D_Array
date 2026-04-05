import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        int start=0,mid=0,end=n-1;

        while(mid<=end){
            if(arr[mid]==0){
                int temp=arr[mid];
                arr[mid]=arr[start];
                arr[start]=temp;
                start++;mid++;
            }
            else if(arr[mid]==1)
                mid++;
            else{
                int temp = arr[mid];
                arr[mid]=arr[end];
                arr[end]=temp;
                end--;
            }
        }
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }   
    }
}