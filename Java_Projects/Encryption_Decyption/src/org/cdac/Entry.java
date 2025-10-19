package org.cdac;

import java.io.FileNotFoundException;
import java.io.IOException;

public class Entry {

	public static void main(String[] args) {

		String inputFile = "input.txt";
		String outputFile = "output.txt";
		FileOperations objFile = new FileOperations();

		try {
			objFile.wordFrequencyInFile(inputFile, outputFile);

		} catch (FileNotFoundException e) {
			System.out.println(e.getMessage());
		} catch (IOException e) {
			System.out.println(e.getMessage());
		}

//		try (Scanner scanner = new Scanner(System.in);
//				BufferedOutputStream buffer = new BufferedOutputStream(
//				new FileOutputStream("E:\\BATCH-2 OOPJ\\TEST_FOLDER\\testFile.txt"))) {
//			
//			String str = scanner.nextLine();
//			byte [] arr = str.getBytes();
//			buffer.write(arr);
//			
//		} catch (FileNotFoundException e) {
//			e.printStackTrace();
//		} catch (IOException e) {
//			e.printStackTrace();
//		}

	}
}
