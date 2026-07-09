import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }       

        int maxcount=0,res=arr[0];

        for(int i=0;i<n;i++){
            int count =1;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j])
                    count++;
            }
            if(count>maxcount){
                maxcount= count;
                res=arr[i];
            }
        }
        System.out.println(res);
    }    
}