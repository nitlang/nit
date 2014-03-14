package test_jvm;

public class TestJvm
{

	private Test2 test;
	private boolean bool;
	private char c;
	private int i;
	private float f;


	public TestJvm(){
	this.bool = false;
	this.c = 'C';
	this.i = 0;
	this.f = 0;
	this.test = null;
	this.test = new Test2();
	}


	public Test2 getTest(){return this.test;}
	public boolean isBool(){return this.bool;}
	public char getC(){return this.c;}
	public int getI(){return this.i;}
	public float getF(){return this.f;}
}

