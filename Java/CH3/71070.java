import java.util.Scanner;

public class FindFutureDates{
	public static void main(String [] args){
		Scanner input= new Scanner(System.in);
		System.out.print("Enter today's day:");
		int day=input.nextInt();
		System.out.print("Enter the number of days elapsed since today:");
		int nextDay=input.nextInt();
				int futureDay = (day + nextDay) % 7;

		System.out.print("Today is ");
		switch (day)
		{
			case 0: System.out.print("Sunday"); break;
			case 1: System.out.print("Monday"); break;
			case 2: System.out.print("Tuesday"); break;
			case 3: System.out.print("Wednesday"); break;
			case 4: System.out.print("Thursday"); break;
			case 5: System.out.print("Friday"); break;
			case 6: System.out.print("Saturday");break;
			default:System.out.print(" an invalid starting day. Today's day must be 0-6.");break;
		
		}

		System.out.print(" and the future day is ");
		switch (futureDay)
		{
			case 0: System.out.println("Sunday"); break;
			case 1: System.out.println("Monday"); break;
			case 2: System.out.println("Tuesday"); break;
			case 3: System.out.println("Wednesday"); break;
			case 4: System.out.println("Thursday"); break;
			case 5: System.out.println("Friday"); break;
			case 6: System.out.println("Saturday");break;
		
		}
	
	}
}
