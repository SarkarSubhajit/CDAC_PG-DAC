package org.cdac;

import java.time.LocalDate;

public class Transaction {
	
	private int txId;
	private LocalDate txDate;
	private float txAmount;
	private boolean txStatus;
	private boolean txArrears;
	
	/**
	 * @param txDate
	 * @param txAmount
	 * @param txStatus
	 * @param txArrears
	 */
	public Transaction(LocalDate txDate, float txAmount, boolean txStatus, boolean txArrears) {
		super();
		this.txId = (int) (100 + Math.random()*900);
		this.txDate = txDate;
		this.txAmount = txAmount;
		this.txStatus = txStatus;
		this.txArrears = txArrears;
	}
	public int getTxId() {
		return txId;
	}
	public LocalDate getTxDate() {
		return txDate;
	}
	public void setTxDate(LocalDate txDate) {
		this.txDate = txDate;
	}
	public float getTxAmount() {
		return txAmount;
	}
	public void setTxAmount(float txAmount) {
		this.txAmount = txAmount;
	}
	public boolean isTxStatus() {
		return txStatus;
	}
	public void setTxStatus(boolean txStatus) {
		this.txStatus = txStatus;
	}
	public boolean isTxArrears() {
		return txArrears;
	}
	public void setTxArrears(boolean txArrears) {
		this.txArrears = txArrears;
	}
	
	@Override
	public String toString() {
		return "Transaction{" +
				" ID: " + txId +
				", DATE: " + txDate +
				", AMOUNT: " + txAmount +
				", STATUS: " + txStatus +
				", ARREARS: " + txArrears + " }";
	}
	
}
