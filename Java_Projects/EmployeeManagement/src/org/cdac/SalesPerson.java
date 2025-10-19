package org.cdac;

public class SalesPerson extends Employee {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	private float commission;
	
	public SalesPerson(String name, String address, int age, char gender, float basicSalary, float commission) {
		super(name, address, age, gender, basicSalary);
		// TODO Auto-generated constructor stub
		this.commission = commission;
	}

	public float getCommission() {
		return commission;
	}

	public void setCommission(float commission) {
		this.commission = commission;
	}

	@Override
	public String getDesignation() {
		String str = new String("SalesPerson");
		return str;
	}
	
	@Override
	public float calculateSalary() {
		// TODO Auto-generated method stub
		return basicSalary + commission;
	}

}
