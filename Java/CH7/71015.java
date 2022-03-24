import java.util.Scanner;
public class AssignGrades {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		
		System.out.print("Enter the number of students: ");
		int student_numbers = scan.nextInt();
		
		System.out.print("Enter "+student_numbers + " scores: ");
		
		int[] scores = new int[student_numbers];
		int best = 0;
		for (int i = 0;i < student_numbers; i++) {
			scores[i] = scan.nextInt();
			if (scores[i] > best) {
				best = scores[i];
			}
			else
				continue;
		}
		for (int i = 0; i < student_numbers ; i++ ) {
			if (scores[i] >= (best - 10)) {
				System.out.println("Student "+ i +" score is "+ scores[i] + " and grade is A");
			}
			else if (scores[i] >= (best - 20)) {
				System.out.println("Student "+ i +" score is "+ scores[i] + " and grade is B");
			}
			else if (scores[i] >= (best - 30)) {
				System.out.println("Student "+ i +" score is "+ scores[i] + " and grade is C");
			}
			else if (scores[i] >= (best - 40)) {
				System.out.println("Student "+ i +" score is "+ scores[i] + " and grade is D");
			}
			else 
				System.out.println("Student "+ i +" score is "+ scores[i] + " and grade is F");
		}
	}
	}
