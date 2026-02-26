#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			/* Affiche les dizaines de l'heure */
			_putchar((hour / 10) + '0');
			/* Affiche les unités de l'heure */
			_putchar((hour % 10) + '0');
			/* Affiche les deux points */
			_putchar(':');
			/* Affiche les dizaines de la minute */
			_putchar((minute / 10) + '0');
			/* Affiche les unités de la minute */
			_putchar((minute % 10) + '0');
			/* Retour à la ligne pour la minute suivante */
			_putchar('\n');
		}
	}
}
