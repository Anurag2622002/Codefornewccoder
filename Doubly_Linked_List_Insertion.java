import java.util.Scanner;

public class Doubly_LL_Insertion {
    Node head = null;
    Node tail = null;

    public Doubly_LL_Insertion() {
    }

    public void creation() {
        Scanner sc = new Scanner(System.in);

        int n;
        do {
            System.out.println("Enter Data: ");
            int data = sc.nextInt();
            Node new_node = new Node(data);
            if (this.head == null) {
                this.head = new_node;
                this.tail = new_node;
            } else {
                System.out.println("Enter 1 to insert data at the beginning, 2 to insert at the end and 3 to insert at aspecific location.");
                int w = sc.nextInt();
                switch (w) {
                    case 1:
                        this.head.prev = new_node;
                        new_node.next = this.head;
                        this.head = new_node;
                        break;
                    case 2:
                        this.tail.next = new_node;
                        new_node.prev = this.tail;
                        this.tail = new_node;
                        break;
                    case 3:
                        Node temp = this.head;
                        Node ptr = temp.next;
                        System.out.println("Enter the data of the location after which you want to insertnew data: ");

                        for(int dataloc = sc.nextInt(); temp.data != dataloc; ptr = ptr.next) {
                            temp = ptr;
                        }

                        new_node.next = temp.next;
                        new_node.prev = temp;
                        temp.next = new_node;
                        ptr.prev = new_node;
                }
            }

            System.out.println("Do you want to enter more data? If 'Yes' press 1: ");
            n = sc.nextInt();
        } while(n == 1);

    }

    public void traverse() {
        Node temp = this.head;
        if (this.head == null) {
            System.out.println("Linked List Doesn't exist");
        } else {
            while(temp != null) {
                System.out.println(temp.data);
                temp = temp.next;
            }
        }

    }

    public static void main(String[] args) {
        Doubly_LL_Insertion x1 = new Doubly_LL_Insertion();
        x1.creation();
        x1.traverse();
    }

    static class Node {
        int data;
        Node prev;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
            this.prev = null;
        }
    }
}
