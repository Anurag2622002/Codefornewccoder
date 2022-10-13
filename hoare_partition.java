public class hoare_partition_pivot {
    public static void main(String[] args) {
        int []arr=new int[]{6,5,8,3,4};
        System.out.print(partitioning(arr,0,arr.length));
    }
    public static int partitioning(int []arr,int l,int h){
        int pivot=arr[l];
        int i=l-1;
        int j=h-1;
        while (true){
            do{
                i++;
            }while (arr[i]<pivot);
            do{
                j--;
            }while (arr[j]>pivot);
            if(i>=j){
                return j;
            }
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
