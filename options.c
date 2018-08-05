#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

static int test_flag;

int main(int argc,char *argv[]){

	puts("-h & --help");
	while(1){
		
		static struct option long_option[]={

		// ** where definitions are made **
		{"average", no_argument,0,'o',},
                {"square", no_argument,0,'k'},
                {"factorial", no_argument,0,'f'},
                {"us", no_argument,0,'u'},
                {"md5", no_argument,0,'m'},
                {"sha-1", no_argument,0,'1'},
                {"ceasar", no_argument,0,'c'},
                {"polybius", no_argument,0,'p'},
                {"affine",no_argument,0,'a'},
                {"rsa", no_argument,0,'r'},
		{"help",no_argument,0,'h'},
		{0,0,0,0},

		};

		int option_index = 0;
		
		// ** "-h" definitions are being made 
		int c = getopt_long(argc,argv,"okfusbm1cparh",//<-
			long_option , & option_index);

		if(c == -1)
			break;

		switch(c){
		
			case 0:
				
				if(long_option[option_index].flag != 0)
				break;
		printf("options %s",long_option[option_index].name);
		if(optarg)
			printf("with arg %s",optarg);
		puts("");
		break;
	
		// ** desired functions can be done **
			case 'o':
				puts("-o");
				break;

			case 'k':	
				puts("-k");
				break;

			case 'f':
				puts("-f");
				break;
			case 'u':
				
				puts("-u");
				break;
			case 'm':
				puts("-m");
				break;
			case '1':
				puts("-1");
				break;
			case 'c':
				puts("-c");
				break;
			case 'p':
				puts("-p");
				break;
			case 'a':
				puts("-a");
				break;
			case 'r':
				puts("-r");
				break;

			case 'h':
        printf("  *** TESTING WRITE PROGRAM *** \n"
               " -o [--ortalama]        \n"
               " -k [--kare]            \n"
               " -f [--faktariel]       \n"
               " -u [--us]              \n"
               " -m [--md5]             \n"
               " -1 [--sha-1]           \n"
               " -c [--ceasar]          \n"
               " -p [--polybius]        \n"
               " -a [--affine]          \n"
               " -r [--rsa]             \n");
	break;
			default:
        printf("  *** TESTING WRITE PROGRAM *** \n"
               " -o [--ortalama]        \n"
               " -k [--kare]            \n"
               " -f [--faktariel]       \n"
               " -u [--us]              \n"
               " -m [--md5]             \n"
               " -1 [--sha-1]           \n"
               " -c [--ceasar]          \n"
               " -p [--polybius]        \n"
               " -a [--affine]          \n"
               " -r [--rsa]             \n");
break;
		
		}
		}

	if (test_flag)
		puts("test flag");
	if(optind < argc){
	
		printf("non-option ARGV-element:");

		while(optind < argc)
			printf("%s",argv[optind++]);
		putchar('\n');
	}
} 
