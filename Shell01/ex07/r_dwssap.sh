cat /etc/passwd | grep -v '#' | awk '{if (NR % 2 == 0) print $1}' | cut -d ':' -f 1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed 's/$/, /' | tr -d '\n' | sed -e 's/, $/./' | tr -d '\n'
