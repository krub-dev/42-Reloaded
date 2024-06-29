ifconfig | grep "ether" | awk '{print substr($0, 15, 17)}'
