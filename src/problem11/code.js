function sortOrders(orders) {
    return orders.sort(function (order1, order2) {
        return (order1[1] > order2[1]) ? 1 : -1;
    });
}

function interact(callback)
{
    var input = [];

    process.stdin.resume();
    process.stdin.setEncoding('ascii');

    process.stdin.on('data', function (line) {
        input = line.split("\n");
    });

    process.stdin.on('end', function () {
        callback(input);
    });
}

(function () {
    interact(function (input) {
        // Retrieve number of orders.
        var orders = parseInt(input[0]), orders_list = [], line;

        for (var i = 1; i <= orders; i++) {
            line = input[i].split(' ');

            orders_list.push([i, parseInt(line[0]) + parseInt(line[1])]);
        }

        // Sort the array.
        orders_list = sortOrders(orders_list).map(function (entry) {
            return entry[0];
        });

        process.stdout.write(orders_list.join(' ') + "\n");
    });
})();
