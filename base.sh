#!/usr/bin/env bash

apt-get update && apt-get upgrade -y && apt-get install -y --no-install-recommends ubuntu-desktop && apt-get install -y gnome-terminal unity-lens-applications unity-lens-files && apt-get clean
