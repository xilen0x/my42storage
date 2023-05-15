#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void	printSizes(void);

int	main(void)
{
	printSizes();
}

void printSizes( void )  {
  printf( "Size of C data types\n\n"                                 );
  printf( "Type               Bytes\n\n"                             );
  printf( "char                 %lu\n" , sizeof( char )               );
  printf( "int8_t               %lu\n" , sizeof( int8_t )             );
  printf( "unsigned char        %lu\n" , sizeof( unsigned char )      );
  printf( "uint8_t              %lu\n" , sizeof( uint8_t )            );
  printf( "short                %lu\n" , sizeof( short )              );
  printf( "int16_t              %lu\n" , sizeof( int16_t )            );
  printf( "uint16_t             %lu\n" , sizeof( uint16_t )           );
  printf( "int                  %lu\n" , sizeof( int )                );
  printf( "unsigned             %lu\n" , sizeof( unsigned )           );
  printf( "long                 %lu\n" , sizeof( long )               );
  printf( "unsigned long        %lu\n" , sizeof( unsigned long )      );
  printf( "int32_t              %lu\n" , sizeof( int32_t )            );
  printf( "uint32_t             %lu\n" , sizeof( uint32_t )           );
  printf( "long long            %lu\n" , sizeof( long long )          );
  printf( "int64_t              %lu\n" , sizeof( int64_t )            );
  printf( "unsigned long long   %lu\n" , sizeof( unsigned long long ) );
  printf( "uint64_t             %lu\n" , sizeof( uint64_t )           );
  printf( "\n" );
  printf( "float                %lu\n" , sizeof( float )              );
  printf( "double               %lu\n" , sizeof( double )             );
  printf( "long double          %lu\n" , sizeof( long double )        );
  printf( "\n" );
  printf( "bool                 %lu\n" , sizeof( bool )               );
  printf( "_Bool                %lu\n" , sizeof( _Bool )              );
  printf( "\n\n" );
}

/*
Size of C data types

Type               Bytes

char                 1
int8_t               1
unsigned char        1
uint8_t              1
short                2
int16_t              2
uint16_t             2
int                  4
unsigned             4
long                 8
unsigned long        8
int32_t              4
uint32_t             4
long long            8
int64_t              8
unsigned long long   8
uint64_t             8

float                4
double               8
long double          16

bool                 1
_Bool                1
*/