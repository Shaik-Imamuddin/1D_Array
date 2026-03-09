import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int res[] = new int[n];

        for(int i=0;i<n;i++){
            res[i]=arr[n-i-1];
            System.out.print(res[i]+" ");
        }
    }
}
