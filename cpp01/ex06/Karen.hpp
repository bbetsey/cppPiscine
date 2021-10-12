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

		int	getType( std::string type );

	public:
		void	complain( std::string level );
};

#endif
