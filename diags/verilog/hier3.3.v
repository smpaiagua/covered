module main;

foo a();

initial begin
`ifdef DUMP
        $dumpfile( "hier3.3.vcd" );
        $dumpvars( 0, main );
`endif
        #10;
        $finish;
end

endmodule

//---------------------------

module foo;

bar a();
bar b();
bar c();

test t();

endmodule

//---------------------------

module bar;

reg y;

endmodule

//---------------------------

module test;

initial begin
	t.a.y = 1'b1;
	#5;
	t.a.y = 1'b0;
end

boo a();

endmodule

//---------------------------------

module boo;

reg y;

endmodule
