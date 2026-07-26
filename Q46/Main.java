import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int total=0;
        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
            total+=arr[i];
        }

        int start=0;
        for(int i=0;i<n;i++){
            int end = total-start-arr[i];
            if(start==end){
                System.out.println(i);
                return;
            }
            start+=arr[i];
        }
        System.out.println(-1);
        return;
    }    
}