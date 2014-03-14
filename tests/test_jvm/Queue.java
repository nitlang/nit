package test_jvm;

import java.util.*;

class Queue
{
    // function pointer
    public native void printError( String errorMsg );

    // internal list
    private LinkedList<String> list;

    public Queue()
    {
        list = new LinkedList<String>();
    }

    public void push( String element )
    {
        System.out.print( "From java, pushing " );
        System.out.print( element );
        System.out.print( "\n" );
        list.addLast( element );
    }

    public String pop() // knows where is native printError
    {
        String element;

        try
        {
            element = list.removeFirst();
        }
        catch ( NoSuchElementException e )
        {
            printError( "From java, empty queue." );
            element = null;
            throw e;
        }

        System.out.print( "From java, popping " );
        System.out.print( element );
        System.out.print( "\n" );

        return element;
    }
}

