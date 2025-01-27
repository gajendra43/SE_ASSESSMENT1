#include <stdio.h>
main()
{
  int choice, pcs, amount, total = 0, a;
  char ch, c;
  do
  {
    printf("\n\n\n\t\t\t\t\t\t      FOOD HOUSE");
    printf("\n\n\t----------------  FAST_FOOD  ----------------");
    printf("\t\t------------------  DESSERT  ------------------");
    printf("\n\n\t press 1 : Pizza            Price = 120rs/pcs");
    printf("\t\t press 5  : Ice-Cream         Price =  80rs/pcs");
    printf("\n\n\t press 2 : Burger           Price =  80rs/pcs");
    printf("\t\t press 6  : Brownie           Price = 120rs/pcs");
    printf("\n\n\t press 3 : noodles          Price = 150rs/pcs");
    printf("\t\t press 7  : Lassi             Price = 100rs/pcs");
    printf("\n\n\t press 4 : Pasta            Price = 130rs/pcs");
    printf("\t\t press 8  : Cup Cake          Price =  50rs/pcs");

    printf("\n\n\t---------------------------------------------");
    printf("\t\t-----------------------------------------------");

    printf("\n\n\t Please Enter Your Choice  :");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("\n\n\t You Have Selected Pizza..");
      printf("\n\t Enter The Quantity :");
      scanf("%d", &pcs);
      amount = 120 * pcs;
      printf("\t Amount : %d rs", amount);
      total = total + amount;
      printf("\n\t Total Amount =%d rs", total);
      break;

    case 2:
      printf("\n\n\t You Have Selected Burger..");
      printf("\n\t Enter The Quantity :");
      scanf("%d", &pcs);
      amount = 80 * pcs;
      printf("\t Amount : %d rs", amount);
      total = total + amount;
      printf("\n\t Total Amount =%d rs", total);
      break;

    case 3:
      printf("\n\n\t You Have Selected Noodles..");
      printf("\n\t Enter The Quantity :");
      scanf("%d", &pcs);
      amount = 150 * pcs;
      printf("\t Amount : %d rs", amount);
      total = total + amount;
      printf("\n\t Total Amount =%d rs", total);
      break;

    case 4:
      printf("\n\n\t You Have Selected Pasta..");
      printf("\n\t Enter The Quantity :");
      scanf("%d", &pcs);
      amount = 130 * pcs;
      printf("\t Amount : %d rs", amount);
      total = total + amount;
      printf("\n\t Total Amount=%d rs", total);
      break;

    case 5:
      printf("\n\n\t You Have Selected Ice-Cream..");
      printf("\n\t Enter The Quantity :");
      scanf("%d", &pcs);
      amount = 80 * pcs;
      printf("\t Amount : %d rs", amount);
      total = total + amount;
      printf("\n\t Total Amount =%d rs", total);
      break;

    case 6:
      printf("\n\n\t You Have Selected Brownie..");
      printf("\n\t Enter The Quantity :");
      scanf("%d", &pcs);
      amount = 120 * pcs;
      printf("\t Amount : %d rs", amount);
      total = total + amount;
      printf("\n\t Total Amount =%d rs", total);
      break;

    case 7:
      printf("\n\n\t You Have Selected Lassi..");
      printf("\n\t Enter The Quantity :");
      scanf("%d", &pcs);
      amount = 100 * pcs;
      printf("\t Amount : %d rs", amount);
      total = total + amount;
      printf("\n\t Total Amount =%d rs", total);
      break;

    case 8:
      printf("\n\n\t You Have Selected Cup Cake..");
      printf("\n\t Enter The Quantity :");
      scanf("%d", &pcs);
      amount = 50 * pcs;
      printf("\t Amount : %d rs", amount);
      total = total + amount;
      printf("\n\t Total Amount =%d rs", total);
      break;

    default:
      printf("\n\t Invalid Choice !!!");
      break;
    }
    printf("\n\t Do you Want To Place More Orders? (y/n): ");
    scanf(" %c", &ch);

  } while (ch == 'Y' || ch == 'y');
  if (ch == 'n' || ch == 'N')
    ;
  {
    printf("\n\t total bill :%d rs", total);
    printf("\n\t Do you Want To Pay in Cash ? (y/n): ");
    scanf(" %c", &c);
    if (c == 'y' || c == 'Y')
    {
      printf("\n\n\t---------------------------------------------");
      printf("\n\t Total Bill Paid In Cash :%d rs", total);
      printf("\n\n\t---------------------------------------------");
    }
    else
    {
      printf("\n\n\t---------------------------------------------");
      printf("\n\t Total Bill Paid Online :%d rs", total);
      printf("\n\n\t---------------------------------------------");
    }
  }
}