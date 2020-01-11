const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#20191f", /* black   */
  [1] = "#6B857B", /* red     */
  [2] = "#A37E82", /* green   */
  [3] = "#76948E", /* yellow  */
  [4] = "#93A5A3", /* blue    */
  [5] = "#D0B4B1", /* magenta */
  [6] = "#B2C9CC", /* cyan    */
  [7] = "#d0dfe4", /* white   */

  /* 8 bright colors */
  [8]  = "#919c9f",  /* black   */
  [9]  = "#6B857B",  /* red     */
  [10] = "#A37E82", /* green   */
  [11] = "#76948E", /* yellow  */
  [12] = "#93A5A3", /* blue    */
  [13] = "#D0B4B1", /* magenta */
  [14] = "#B2C9CC", /* cyan    */
  [15] = "#d0dfe4", /* white   */

  /* special colors */
  [256] = "#20191f", /* background */
  [257] = "#d0dfe4", /* foreground */
  [258] = "#d0dfe4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
