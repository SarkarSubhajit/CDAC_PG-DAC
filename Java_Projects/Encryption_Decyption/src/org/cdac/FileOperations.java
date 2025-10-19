package org.cdac;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class FileOperations {

	public void wordFrequencyInFile(String inputFile, String outputFile) throws FileNotFoundException, IOException {
		try (BufferedReader bufferRead = new BufferedReader(new FileReader(inputFile))) {

			String str;
			int count = 0;
			String[] arr = new String[10000];
			int[] freq = new int[10000];

			while ((str = bufferRead.readLine()) != null) {
				str = str.replaceAll("[()'\";,:%_`]", " ");
				str = str.replaceAll("\\s+", " ");

				String[] arrStr = str.split("\\s+");
				for (String words : arrStr) {
					words = words.replaceAll("[^a-zA-Z0-9]", "");
					if (words.isEmpty())
						continue;

					int index = -1;
					// first check empty and from next time check if word already exists
					for (int iTmp = 0; iTmp < count; iTmp++) {
						if (arr[iTmp].equals(words)) {
							index = iTmp;
							break;
						}
					}

					if (index != -1)
						freq[index]++;
					else {
						arr[count] = words;
						freq[count] = 1;
						count++;
					}
				}
			}

			// sort by Words alphabetically
			for (int i = 0; i < count - 1; i++) {
				for (int j = 0; j < count- 1 - i; j++) {
					if (arr[j].compareTo(arr[j + 1]) > 0) {
						String tempWord = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = tempWord;

						int tempFreq = freq[j];
						freq[j] = freq[j + 1];
						freq[j + 1] = tempFreq;
					}
				}
			}

			// sort by Frequency
			int[] freqSort = new int[count];
			String[] wordSort = new String[count];
			for (int iTmp = 0; iTmp < count; iTmp++) {
				freqSort[iTmp] = freq[iTmp];
				wordSort[iTmp] = arr[iTmp];
			}

			for (int i = 0; i < count - 1; i++) {
				for (int j = 0; j < count - 1 - i; j++) {
					if (freqSort[j] < freqSort[j + 1]) {
						String tempWord = wordSort[j];
						wordSort[j] = wordSort[j + 1];
						wordSort[j + 1] = tempWord;

						int tempFreq = freqSort[j];
						freqSort[j] = freqSort[j + 1];
						freqSort[j + 1] = tempFreq;
					}
				}
			}

			try (BufferedWriter bufferWrite = new BufferedWriter(new FileWriter(outputFile))) {
				bufferWrite.write("*******************ALPHABETICALLY SORTED*******************");
				bufferWrite.newLine();
				for (int i = 0; i < count; i++) {
					bufferWrite.write(arr[i] + " , " + freq[i]);
					bufferWrite.newLine();
				}
				bufferWrite.newLine();
				
				bufferWrite.write("*******************FREQUENCY-WISE SORTED*******************");
				bufferWrite.newLine();
				for (int i = 0; i < count; i++) {
					bufferWrite.write(wordSort[i] + " , " + freqSort[i]);
					bufferWrite.newLine();
				}
			}
		}
	}

	public void encryption(String fileName) {

		try (FileInputStream objIn = new FileInputStream(fileName)) {
			byte[] arr = new byte[objIn.available()];
			objIn.read(arr);
			byte[] arrEncrypted = new byte[arr.length];

			for (int iTmp = 0; iTmp < arr.length; iTmp++) {
				arrEncrypted[iTmp] = (byte) (arr[iTmp] + 20);
			}
			try (FileOutputStream objOut = new FileOutputStream(fileName)) {
				objOut.write(arrEncrypted);
			}

		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	public void decryption(String fileName) {

		try (FileInputStream objIn = new FileInputStream(fileName)) {
			byte[] arr = new byte[objIn.available()];
			objIn.read(arr);
			byte[] arrEncrypted = new byte[arr.length];

			for (int iTmp = 0; iTmp < arr.length; iTmp++) {
				arrEncrypted[iTmp] = (byte) (arr[iTmp] - 20);
			}
			try (FileOutputStream objOut = new FileOutputStream(fileName)) {
				objOut.write(arrEncrypted);
			}

		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

}
