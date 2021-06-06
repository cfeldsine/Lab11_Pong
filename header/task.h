// Task scheduler data structure
// Struct for Tasks represent a running process in our simple real-time operating system
typedef struct _task {
 signed char state; //Task's current state
 unsigned long int period; //Task period
 unsigned long int elapsedTime; //Time elapsed since last task tick
 int (*TickFct) (int); //Task tick function
} task;

//--End Task scheduler data stucture
