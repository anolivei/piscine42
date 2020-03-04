# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    map.pl                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpereira <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/10 18:24:42 by cpereira          #+#    #+#              #
#    Updated: 2019/12/10 18:25:55 by cpereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl
use warnings;

use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
	for (my $i = 0; $i < $y; $i++) 
	{
		for (my $j = 0; $j < $x; $j++) 
		{
			if (int(rand($y) * 2) < $density) 
			{
				print "o";
			}
			else 
			{
				print ".";
			}
		}		
		print "\n";
	}
