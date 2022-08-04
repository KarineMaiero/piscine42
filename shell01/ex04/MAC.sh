#!/bin/bash
ifconfig | grep "ether" | sed "s/ether //g" | sed "s/[[:space:]]//g"
