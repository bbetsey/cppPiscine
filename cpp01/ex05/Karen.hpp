#ifndef KAREN_H
# define KAREN_H

# include <iostream>

class Karen
{
	private:
		void		debug( void );
		void		info( void );
		void		warning( void );
		void		error( void );
		void		another( void );

		typedef void (Karen::*method)( void );
		method		methods[5];

		int	getType( std::string type );

	public:
		Karen( void );

		void	complain( std::string level );
};

#endif
