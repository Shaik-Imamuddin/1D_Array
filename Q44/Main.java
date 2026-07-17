import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int arr[] = new int[n];
        int leaders[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        int ind=0;
        int mfr = arr[n-1];
        leaders[ind++] = mfr;

        for(int i=n-2;i>=0;i--){
            if(arr[i]>=mfr){
                mfr  = arr[i];
                leaders[ind++] = mfr; 
            }
        }

        for(int i=ind-1;i>=0;i--){
            System.out.print(leaders[i]+" ");
        }

    }    
}