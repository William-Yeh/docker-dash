#!/bin/bash

rm -rf dash
rm dash-*

vagrant halt
vagrant destroy --force
