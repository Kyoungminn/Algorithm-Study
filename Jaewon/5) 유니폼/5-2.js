function solution(n, lost, reserve) {
    const realReserve = reserve.filter(element => !lost.includes(element));
    const realLost = lost.filter(element => !reserve.includes(element));

    const ableNum = realLost.filter(filterElement => {
        return realReserve.find((findElement, index) => {
            const has = findElement === filterElement-1 || findElement === filterElement+1;
            if (has) {
                realReserve.splice(index, 1);
            }
            return has;
        });
    }).length;
    return n - (realLost.length - ableNum);
}