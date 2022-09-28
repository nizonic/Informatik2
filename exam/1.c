Algo:
reverseEven(Q)
    S_even = initStack();
    Q_all = initQueue();
    for every number in Q do
        number = deQueue(Q)
        if number%2 == 0 then
            push(S_even, number);
        enqueue(Q_all, number);

}   for i=1 to queueSize(Q_all) do
        number = dequeue(Q_all);
        if number%2 == 0 then
            enqueue(Q, pop(S_even));
        else do
            enqueue(Q, number);
