import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        for(int i=0;i<n/2;i++){
            if(arr[i]!=arr[n-i-1]){
                System.out.println("Not a Palindrome");
                return;
            }
        }   
        System.out.println("Palindrome");
        return;
    }    
}