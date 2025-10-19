package org.cdac;

import java.util.NoSuchElementException;

public enum Menu {

	PUBLIC(1),
	PRIVATE(2),
	DEFAULT(3),
	ABSTRACT(1),
	EXIT(4);
	
	private int choice;
	
	private Menu(int choice) {
		this.choice = choice;
	}
	
	public static Menu fromChoice(int choice) {
		for (Menu val : values()) {
			if (val.choice == choice)
				return val;
		}
		throw new NoSuchElementException("Not Found");
	}
	
}
