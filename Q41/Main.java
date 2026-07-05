import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }       

        int maxprod = arr[0];
        int minprod = arr[0];
        int ans = arr[0];

        for(int i=1;i<n;i++){

            int curr =arr[i];

            if(curr<0){
                int temp = maxprod;
                maxprod = minprod;
                minprod = temp;
            }

            if(curr>maxprod*curr)
                maxprod = curr;
            else
                maxprod = maxprod*curr;

            if(curr<minprod*curr)
                minprod = curr;
            else   
                minprod = minprod*curr;


            if(maxprod>ans)
                ans = maxprod;
        }
        System.out.println(ans);
    }    
}