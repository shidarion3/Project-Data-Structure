
package project1;



import java.util.Scanner;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class CRUDLinkedist {
private static List<String> data = new LinkedList<>();
private static Scanner scanner = new Scanner(System.in);
	public static void main(String[] args) {
		        int choice;
		        do {
		            System.out.println("Menu:");
		            System.out.println("1. Create");
		            System.out.println("2. Read");
		            System.out.println("3. Update");
		            System.out.println("4. Delete");
		            System.out.println("5. Exit");
		            System.out.print("Enter your choice: ");
		            choice = scanner.nextInt();
		            scanner.nextLine(); 

		            switch (choice) {
		                case 1:
		                    create();
		                    break;
		                case 2:
		                    read();
		                    break;
		                case 3:
		                    update();
		                    break;
		                case 4:
		                    delete();
		                    break;
		                case 5:
		                    System.out.println("Exiting...");
		                    break;
		                default:
		                    System.out.println("Invalid choice. Please try again.");
		            }
		        } while (choice != 5);
		    }

		    private static void create() {
		        System.out.print("Enter a new element: ");
		        String element = scanner.nextLine();
		        data.add(element);
		        System.out.println("Element added: " + element);
		    }

		    private static void read() {
		        System.out.println("List Elements:");
		        for (int i = 0; i < data.size(); i++) {
		            System.out.println(i + ". " + data.get(i));
		        }
		    }

		    private static void update() {
		        System.out.print("Enter the index of the element to update: ");
		        int index = scanner.nextInt();
		        scanner.nextLine();

		        if (index >= 0 && index < data.size()) {
		            System.out.print("Enter the new value: ");
		            String newValue = scanner.nextLine();
		            data.set(index, newValue);
		            System.out.println("Element updated.\n\n");
		        } else {
		            System.out.println("Invalid index.\n\n");
		        }
		    }

		    private static void delete() {
		        System.out.print("Enter the index of the element to delete: ");
		        int index = scanner.nextInt();
		        scanner.nextLine();

		        if (index >= 0 && index < data.size()) {
		            String deletedElement = data.remove(index);
		            System.out.println("Element deleted: " + deletedElement + "\n\n");
		        } else {
		            System.out.println("Invalid index.\n\n");
		        }
		    }
		}   

