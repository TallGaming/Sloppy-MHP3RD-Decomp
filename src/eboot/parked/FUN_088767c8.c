/* Purpose: linearly interpolate one value from a keyed table. */
float FUN_088767c8(float key,float*table){float*row=table;while(row[0]>=0.0f){while(row[0]<=key){float*next=row+2;if(key<=next[0])return row[1]+(next[1]-row[1])*((key-row[0])/(next[0]-row[0]));row=next;if(row[0]<0.0f)break;}break;}return row[1];}
