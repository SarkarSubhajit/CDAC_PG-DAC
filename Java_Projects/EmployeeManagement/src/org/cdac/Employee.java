package org.cdac;

import java.io.Serializable;

public abstract class Employee implements Comparable<Employee>, Serializable {


	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	
	private static int count = 1;

	private String id;
	
	protected String name;
	
	protected String address;
	
	protected int age;
	
	protected char gender;
	
	protected float basicSalary;

	
	public Employee(String name, String address, int age, char gender, float basicSalary) {
		this.id = String.format("EMP%03d", count++);
		this.name = name;
		this.address = address;
		this.age = age;
		this.gender = gender;
		this.basicSalary = basicSalary;
	}
	
	public String getId() {
		return id;
	}
	
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getAddress() {
		return address;
	}

	public void setAddress(String address) {
		this.address = address;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public char getGender() {
		return gender;
	}

	public void setGender(char gender) {
		this.gender = gender;
	}

	public float getBasicSalary() {
		return basicSalary;
	}

	public void setBasicSalary(float basicSalary) {
		this.basicSalary = basicSalary;
	}
	
	public abstract String getDesignation();
	
	public abstract float calculateSalary();
	
	public int getRank() {
		if (this instanceof Manager) return 1;
		if (this instanceof Engineer) return 2;
		if (this instanceof SalesPerson) return 3;
		return Integer.MAX_VALUE;
	}
	
	@Override
	public int compareTo(Employee other) {
		return Integer.compare(this.getRank(), other.getRank());
	}
	
}





















