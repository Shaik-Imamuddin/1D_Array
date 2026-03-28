import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        int min=arr[0],secmin=arr[n-1];

        for(int i=0;i<n;i++){
            if(arr[i]<min){
                secmin=min;
                min=arr[i];
            }
            else if(arr[i]<secmin && arr[i]!=min)
                secmin=arr[i];
        }
        System.out.print(secmin);
    }
}