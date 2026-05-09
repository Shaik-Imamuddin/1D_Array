import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        int arr[] = new int[n];
        int res[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        int k=0;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<k;j++){
                if(arr[i]==res[j])
                    count++;
            }
            if(count==0){
                res[k]=arr[i];
                k++;
            }
        }
        for(int i=0;i<k;i++){
            System.out.print(res[i]+" ");
        }
    }
}