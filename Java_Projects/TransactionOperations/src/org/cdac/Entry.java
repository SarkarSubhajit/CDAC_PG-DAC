package org.cdac;

import java.time.LocalDate;
import java.util.HashSet;
import java.util.function.Function;
import java.util.function.Predicate;

public class Entry {

	public static void main(String[] args) {
		
		HashSet<Transaction> set = new HashSet<>();
		
		set.add(new Transaction(LocalDate.of(2025,05,17), 5200.57f, true, false));
		set.add(new Transaction(LocalDate.of(2021,03,21), 4800.57f, true, true));
		set.add(new Transaction(LocalDate.of(1978,02,19), 4000.57f, true, false));
		set.add(new Transaction(LocalDate.of(2024,01,04), 5800.57f, false, false));
		set.add(new Transaction(LocalDate.of(2020,03,31), 6000.57f, false, true));
		
		//getTxn(set);
		//getTxnSt(set);
		getDue(set);
		
	}
	
	public static void display(HashSet<Transaction> set) {
		for (Transaction txn : set)
			System.out.println(txn);
	}
	
	public static void getTxn(HashSet<Transaction> set) {
		Predicate<Transaction> pred = txn -> txn.getTxAmount() > 5000;
		for (Transaction txn : set) {
			if (pred.test(txn))
				System.out.println(txn);
		}
	}
	
	public static void getTxnSt(HashSet<Transaction> set) {
		set.forEach(txn -> {
			if (!txn.isTxStatus())
				System.out.println(txn);
		});
	}
	
	public static void getDue(HashSet<Transaction> set) {
		Function<Transaction, Double> func = txn -> 
			txn.isTxArrears() 
				? (Double) (txn.getTxAmount() + 500 + (0.18 * txn.getTxAmount())) 
				: txn.getTxAmount();
		set.forEach(txn -> {
			System.out.println(txn);
			System.out.printf("Amount Due : %.2f%n", func.apply(txn));
		});
	}

}
